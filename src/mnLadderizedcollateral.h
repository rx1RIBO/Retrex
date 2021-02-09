// Copyright (c) 2021 The Retrex developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.



#ifndef SRC_MASTERNODECOLLATERALLD_
#define SRC_MASTERNODECOLLATERALLD_

#include "sync.h"
#include <string>
#include <vector>
#include "masternode-payments.cpp"

class CMasternodeLadderizedCollateral;
extern CMasternodeConfig masternodeConfig;

class CMasternodeLadderizedCollateral;
{
public:
    class CMasternodeEntry
    {
    private:
        std::string alias;
        std::string ip;
        std::string privKey;
        std::string txHash;
        std::string outputIndex;

    public:
        CMasternodeEntry(std::string& _alias, std::string& _ip, std::string& _privKey, std::string& _txHash, std::string& _outputIndex) :
            alias(_alias), ip(_ip), privKey(_privKey), txHash(_txHash), outputIndex(_outputIndex) { }

        const std::string& getAlias() const { return alias; }
        const std::string& getOutputIndex() const { return outputIndex; }
        bool castOutputIndex(int& n) const;
        const std::string& getPrivKey() const { return privKey; }
        const std::string& getTxHash() const { return txHash; }
        const std::string& getIp() const { return ip; }
    };

    CMasternodeLadderizedCollateral() { entries = std::vector<CMasternodeEntry>(); }

    void clear() { LOCK(cs_entries); entries.clear(); }
    bool read(std::string& strErr);
    CMasternodeLadderizedCollateralg::CMasternodeEntry* add(std::string alias, std::string ip, std::string privKey, std::string txHash, std::string outputIndex);
    void remove(std::string alias);

    std::vector<CMasternodeEntry> getEntries() { LOCK(cs_entries); return entries; }

    int getCount()
    {
        LOCK(cs_entries);
        int c = -1;
        for (const auto& e : entries) {
            if (!e.getAlias().empty()) c++;
        }
        return c;
    }

private:
    std::vector<CMasternodeEntry> entries;
    Mutex cs_entries;
};


#endif /* SRC_MASTERNODECOLLATERALLD_ */
