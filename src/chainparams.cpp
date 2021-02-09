// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2021 The Retrex developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "libzerocoin/Params.h"
#include "chainparams.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("00000dc35e127cad96254d7ca015b21bef1010479e5c5b4b7010837f947dd76d"));
static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1612202307, // * UNIX timestamp of last checkpoint block
    0,    // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    2000        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of
    (0, uint256("0x"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1612202307,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of
    (0, uint256("0x")); // lyra2z
//    (0, uint256("0x000001733877023e9a2751258b8119e420e153377ffd21c996af58c8cdceede5")); // quark
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1612202307,
    0,
    100};

libzerocoin::ZerocoinParams* CChainParams::Zerocoin_Params() const
{
    assert(this);
    static CBigNum bnTrustedModulus(zerocoinModulus);
    static libzerocoin::ZerocoinParams ZCParams = libzerocoin::ZerocoinParams(bnTrustedModulus);

    return &ZCParams;
}

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0xe3;
        pchMessageStart[1] = 0x30;
        pchMessageStart[2] = 0x2b;
        pchMessageStart[3] = 0x5b;
        vAlertPubKey = ParseHex("04f56955a51ba1cfbdfc6a1182567822ae9d5bd6d6f7f81b9c9f567c54b707f2e49d139f4ada9d75e986debba5a4a5ff03dba04b8419fe7006e3dc18ecb000150e");
        nDefaultPort = 37521;
        bnProofOfWorkLimit = ~uint256(0) >> 20; // Retrex starting difficulty is 1 / 2^12
        nSubsidyHalvingInterval = 64800;   // HALVING EVERY: 64800 BLOCKS
        nSubsidyBudgetPercentage = 5;      // Must be less than 100
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 60 * 60; // Retrex: 1 hr
        nTargetSpacing = 120;  // Retrex: 2 min
        nMaturity = 10;
        nMasternodeCollateral = 10000; // 10,000 REEX
        nMasternodeCountDrift = 20;
        nMaxMoneyOut =  600000000LL * COIN;
        nSwiftTxMinFee = 0.01 * COIN;             // 1 CENT or 10000 satoshis
        nMinTxFeePerK = 0.0001 * COIN;            // .01 CENT or 100 satoshis
        nMinRelayTxFeePerK = 0.0001 * COIN;       // .01 CENT or 100 satoshis

        /** Height or Time Based Activations **/
        nLastPOWBlock = 200;
        nModifierUpdateBlock = 0;
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = -1; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = -1; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = 0; //Last valid accumulator checkpoint
        nBlockEnforceInvalidUTXO = 1; //Start enforcing the invalid UTXO's

        /*
            ```
            python ~/gig8/GenesisH0/genesis.py -a quark-hash \
              -z "S. Africa looks to accelerate land redistribution" \
              -t 1525032500 -v 0 \
              -p 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            ```

            04ffff001d010431532e20416672696361206c6f6f6b7320746f20616363656c6572617465206c616e64207265646973747269627574696f6e
            algorithm: quark-hash
            merkle hash: 5343845516659ffdf8d65682c3241bedffdcb4f85a51b780f6ebfffe619a31a3
            pszTimestamp: S. Africa looks to accelerate land redistribution
            pubkey: 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            time: 1525032500
            bits: 0x1e0ffff0
            Searching for genesis hash..
            genesis hash found!
            nonce: 308971
            genesis hash: 00000c392c066ec40b4138a3642ac7c7c3a0b157be45553ea1adcce4196c968d
        */
        const char* pszTimestamp = "Retrex Febraury 2 2021";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04f56955a51ba1cfbdfc6a1182567822ae9d5bd6d6f7f81b9c9f567c54b707f2e49d139f4ada9d75e986debba5a4a5ff03dba04b8419fe7006e3dc18ecb000150e") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1612202307;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 1058345;


        hashGenesisBlock = genesis.GetHash();
        assert(genesis.hashMerkleRoot == uint256("0xeb498863362c0a90c7b151aeecc9669c4acb776829ae929c9ab7c8175ae25d82"));
        assert(hashGenesisBlock == uint256("0x00000dc35e127cad96254d7ca015b21bef1010479e5c5b4b7010837f947dd76d"));

        // Zerocoin, activated never
        nZerocoinStartHeight = INT_MAX;
        nZerocoinStartTime = INT_MAX;

        vSeeds.push_back(CDNSSeedData("0", "95.179.151.222"));             // Primary DNS Seeder
        vSeeds.push_back(CDNSSeedData("1", "217.69.4.232"));      // Secondary DNS Seeder
        vSeeds.push_back(CDNSSeedData("2", "140.82.34.125"));     // Third DNS Seeder

        // https://en.bitcoin.it/wiki/List_of_address_prefixes
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 60);     // starts with R
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 63);     // starts with S
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 75);        // starts with X

        /* if tempted to change below consider https://github.com/bitcoin/bips/blob/master/bip-0043.mediawiki
            Because this scheme can be used to generate nodes for more cryptocurrencies at once,
            or even something totally unrelated to cryptocurrencies, there's no point in using a
            special version magic described in section "Serialization format" of BIP32. We suggest
            to use always 0x0488B21E for public and 0x0488ADE4 for private nodes (leading to
            prefixes "xpub" and "xprv" respectively).
        */

        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x02)(0x0a)(0xc4).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = false;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "04f56955a51ba1cfbdfc6a1182567822ae9d5bd6d6f7f81b9c9f567c54b707f2e49d139f4ada9d75e986debba5a4a5ff03dba04b8419fe7006e3dc18ecb000150e";
        strObfuscationPoolDummyAddress = "D87q2gC9j6nNrnzCsg4aY6bHMLsT9nUhEw";
        nStartMasternodePayments = genesis.nTime + 60 * 60; // 1 hr after genesis

        /** Zerocoin */
        // See https://github.com/Zerocoin/libzerocoin/wiki/Generating-Zerocoin-parameters
        // See https://pivx.org/zpiv/
        // http://zerocoin.org/media/pdf/ZerocoinOakland.pdf
        zerocoinModulus = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
            "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
            "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
            "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
            "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
            "31438167899885040445364023527381951378636564391212010397122822120720357";
        nMaxZerocoinSpendsPerTransaction = 7; // Assume about 20kb each
        nMinZerocoinMintFee = 1 * CENT; //high fee required for zerocoin mints
        nMintRequiredConfirmations = 20; //the maximum amount of confirmations until accumulated in 19
        nRequiredAccumulation = 1;
        nDefaultSecurityLevel = 100; //full security level for accumulators
        nZerocoinHeaderVersion = 4; //Block headers must be this version once zerocoin is active
        nBudget_Fee_Confirmations = 6; // Number of confirmations for the finalization fee
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0xc3;
        pchMessageStart[1] = 0x28;
        pchMessageStart[2] = 0x93;
        pchMessageStart[3] = 0x9e;
        vAlertPubKey = ParseHex("04f56955a51ba1cfbdfc6a1182567822ae9d5bd6d6f7f81b9c9f567c54b707f2e49d139f4ada9d75e986debba5a4a5ff03dba04b8419fe7006e3dc18ecb000150e");
        nDefaultPort = 37523;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 60 * 60; // Retrex: 1 hr
        nTargetSpacing = 120;  // Retrex: 2 min
        nLastPOWBlock = 500;
        nMaturity = 30;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 0; //approx Mon, 17 Apr 2017 04:00:00 GMT
        nMaxMoneyOut =  600000000LL * COIN;

        // nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        // nBlockRecalculateAccumulators = -1; //Trigger a recalculation of accumulators
        // nBlockFirstFraudulent = -1; //First block that bad serials emerged
        // nBlockLastGoodCheckpoint = 0; //Last valid accumulator checkpoint
        // nBlockEnforceInvalidUTXO = 1; //Start enforcing the invalid UTXO's

        /*
            ```
            python ~/gig8/GenesisH0/genesis.py -a quark-hash \
              -z "S. Africa looks to accelerate land redistribution" \
              -t 1525032501 -v 0 \
              -p 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            ```
            04ffff001d010431532e20416672696361206c6f6f6b7320746f20616363656c6572617465206c616e64207265646973747269627574696f6e
            algorithm: quark-hash
            merkle hash: 5343845516659ffdf8d65682c3241bedffdcb4f85a51b780f6ebfffe619a31a3
            pszTimestamp: S. Africa looks to accelerate land redistribution
            pubkey: 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            time: 1525032501
            bits: 0x1e0ffff0
            Searching for genesis hash..
            genesis hash found!
            nonce: 601665
            genesis hash: 000002244385b8f9a32b98ab6b9eb0c0e30acfce4f76fb63fbd5b6ba3d4936cf
        */
        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1612202307;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 601665;

        hashGenesisBlock = genesis.GetHash();
        //assert(hashGenesisBlock == uint256("0x000002244385b8f9a32b98ab6b9eb0c0e30acfce4f76fb63fbd5b6ba3d4936cf"));

        // Zerocoin, activated by default
        nZerocoinStartHeight = INT_MAX;
        nZerocoinStartTime = INT_MAX;

        vFixedSeeds.clear();
        vSeeds.clear();
        vSeeds.push_back(CDNSSeedData("retrex.tech", "testnet-seeds.retrex.tech"));             // Primary DNS Seeder
        vSeeds.push_back(CDNSSeedData("gig8.com", "testnet-seeds.retrex.gig8.com"));      // Secondary DNS Seeder

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 110); // Testnet retrex addresses start with 'm''
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 125);  // Testnet retrex script addresses start with 's'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 137);     // Testnet private keys start with 'x'
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();
        // Testnet retrex BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x10)(0x03).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "04f56955a51ba1cfbdfc6a1182567822ae9d5bd6d6f7f81b9c9f567c54b707f2e49d139f4ada9d75e986debba5a4a5ff03dba04b8419fe7006e3dc18ecb000150e";
        strObfuscationPoolDummyAddress = "y57cqfGRkekRyDRNeJiLtYVEbvhXrNbmox";
        nStartMasternodePayments = genesis.nTime + 60 * 60; // 1 hr after genesis
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        strNetworkID = "regtest";
        pchMessageStart[0] = 0xb2;
        pchMessageStart[1] = 0x5a;
        pchMessageStart[2] = 0x85;
        pchMessageStart[3] = 0xc9;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 60 * 60; // Retrex: 1 hour
        nTargetSpacing = 120;        // Retrex: 2 min
        bnProofOfWorkLimit = ~uint256(0) >> 1;

        /*
            ```
            python ~/gig8/GenesisH0/genesis.py -a quark-hash \
              -z "S. Africa looks to accelerate land redistribution" \
              -t 1525032502 -v 0 \
              -p 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            ```
            04ffff001d010431532e20416672696361206c6f6f6b7320746f20616363656c6572617465206c616e64207265646973747269627574696f6e
            algorithm: quark-hash
            merkle hash: 5343845516659ffdf8d65682c3241bedffdcb4f85a51b780f6ebfffe619a31a3
            pszTimestamp: S. Africa looks to accelerate land redistribution
            pubkey: 04dd017f0deb12b60abcb78030ffac6b351e2180dc57c881118013a94775a988d3c9390e71404395011409556d0963d9241ce7db4cb8266bf1c18fac3ff3fe9069
            time: 1525032502
            bits: 0x1e0ffff0
            Searching for genesis hash..
            genesis hash found!
            nonce: 233847
            genesis hash: 000006ba3bf77872f9c4747ed7451309cfc89c85f6b74f19254868211162de4a
        */
        genesis.nTime = 1612202307;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 233847;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 22005;
        //assert(hashGenesisBlock == uint256("0x000006ba3bf77872f9c4747ed7451309cfc89c85f6b74f19254868211162de4a"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 37006;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
