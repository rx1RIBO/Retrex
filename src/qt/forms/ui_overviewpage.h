/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout_Content;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout;
    QFrame *frame_Balances;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelWatchAvailable;
    QLabel *labelLockedBalanceText;
    QLabel *labelImmatureText;
    QLabel *labelBalance;
    QLabel *labelLockedBalance;
    QLabel *labelBalanceText;
    QLabel *labelUnconfirmed;
    QLabel *labelImmature;
    QLabel *labelPendingText;
    QLabel *labelWatchImmature;
    QLabel *labelWatchonly;
    QLabel *labelTotalText;
    QLabel *labelWatchPending;
    QLabel *labelWatchLocked;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_right;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAlerts;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1089, 628);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(115);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setMinimumSize(QSize(1089, 628));
        OverviewPage->setMaximumSize(QSize(11111111, 11111111));
        OverviewPage->setBaseSize(QSize(0, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(-1, -1, 9, -1);
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(850, 610));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 6);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        verticalLayout_Master->setContentsMargins(0, 0, 0, 0);
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setEnabled(true);
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamily(QStringLiteral("Hind"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        labelOverviewHeaderLeft->setFont(font);
        labelOverviewHeaderLeft->setFrameShape(QFrame::NoFrame);
        labelOverviewHeaderLeft->setLineWidth(0);
        labelOverviewHeaderLeft->setMidLineWidth(0);
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeading);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalLayout_Header->setStretch(0, 1);

        verticalLayout_Header->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout_Content = new QVBoxLayout(frame_Content);
        verticalLayout_Content->setObjectName(QStringLiteral("verticalLayout_Content"));
        verticalLayout_Content->setContentsMargins(1, 0, 25, 0);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setSpacing(6);
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        frameObfuscation = new QFrame(frame_Content);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 0));
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameObfuscation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_Balances = new QFrame(frameObfuscation);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_Balances);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, 110);
        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelWatchAvailable->setFont(font1);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelLockedBalanceText = new QLabel(frame_Balances);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        labelLockedBalanceText->setFont(font2);

        gridLayout->addWidget(labelLockedBalanceText, 4, 0, 1, 1);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        labelImmatureText->setFont(font2);

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelLockedBalance = new QLabel(frame_Balances);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setFont(font1);
        labelLockedBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelLockedBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelLockedBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLockedBalance, 4, 1, 1, 1);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));
        labelBalanceText->setFont(font2);

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));
        labelPendingText->setFont(font2);

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font1);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelTotalText = new QLabel(frame_Balances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        labelTotalText->setFont(font3);

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font1);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelWatchLocked = new QLabel(frame_Balances);
        labelWatchLocked->setObjectName(QStringLiteral("labelWatchLocked"));
        labelWatchLocked->setFont(font1);
        labelWatchLocked->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchLocked->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelWatchLocked->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchLocked->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchLocked, 4, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 5, 3, 1, 1);

        labelTotal = new QLabel(frame_Balances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setMinimumSize(QSize(0, 0));
        labelTotal->setSizeIncrement(QSize(0, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        font4.setKerning(true);
        labelTotal->setFont(font4);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setFrameShape(QFrame::NoFrame);
        labelTotal->setLineWidth(0);
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setWordWrap(false);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        labelWatchTotal->setFont(font5);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 REEX"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 50);
        label_5 = new QLabel(frame_Balances);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 20));
        QFont font6;
        font6.setFamily(QStringLiteral("aakar"));
        font6.setPointSize(27);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        label_5->setFont(font6);
        label_5->setMargin(0);
        label_5->setIndent(-1);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_Balances);


        verticalLayout_left->addWidget(frameObfuscation);

        verticalLayout_left->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_left);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        frame_RecentTransactions = new QFrame(frame_Content);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_1 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(false);
        font7.setWeight(50);
        label_4->setFont(font7);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_1->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        QFont font8;
        font8.setPointSize(13);
        listTransactions->setFont(font8);
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setLineWidth(0);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_1->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_2);

        labelAlerts = new QLabel(frame_RecentTransactions);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        verticalLayout_1->addWidget(labelAlerts);


        verticalLayout_right->addWidget(frame_RecentTransactions);


        horizontalLayout_Content->addLayout(verticalLayout_right);

        horizontalLayout_Content->setStretch(0, 1);
        horizontalLayout_Content->setStretch(1, 1);

        verticalLayout_Content->addLayout(horizontalLayout_Content);


        verticalLayout_Master->addWidget(frame_Content);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout_Master);


        topLayout->addWidget(frame_BG);

        topLayout->setStretch(0, 1);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("OverviewPage", "RETREX - OVERVIEW", Q_NULLPTR));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked REEX or Masternode collaterals. These are excluded from zREEX minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked REEX or Masternode collaterals. These are excluded from zREEX minting.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotalText->setToolTip(QApplication::translate("OverviewPage", "Your current Retrex balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchLocked->setToolTip(QApplication::translate("OverviewPage", "Current locked balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current Retrex balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("OverviewPage", "REEX BALANCE", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "RECENT TRANSACTIONS", Q_NULLPTR));
        labelAlerts->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
