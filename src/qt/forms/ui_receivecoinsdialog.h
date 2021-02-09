/********************************************************************************
** Form generated from reading UI file 'receivecoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVECOINSDIALOG_H
#define UI_RECEIVECOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *reuseAddress;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *reqLabel;
    QLineEdit *reqMessage;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    BitcoinAmountField *reqAmount;
    QCheckBox *useBech32;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *receiveButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QTableView *recentRequestsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showRequestButton;
    QPushButton *removeRequestButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ReceiveCoinsDialog)
    {
        if (ReceiveCoinsDialog->objectName().isEmpty())
            ReceiveCoinsDialog->setObjectName(QStringLiteral("ReceiveCoinsDialog"));
        ReceiveCoinsDialog->resize(962, 616);
        verticalLayout = new QVBoxLayout(ReceiveCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setSpacing(0);
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        frame_Header = new QFrame(ReceiveCoinsDialog);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_8 = new QVBoxLayout(frame_Header);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeft);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalLayout_Header->setStretch(0, 1);

        verticalLayout_8->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_BG = new QFrame(ReceiveCoinsDialog);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        verticalLayout_5 = new QVBoxLayout(frame_BG);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_3);

        frame2 = new QFrame(frame_BG);
        frame2->setObjectName(QStringLiteral("frame2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame2->sizePolicy().hasHeightForWidth());
        frame2->setSizePolicy(sizePolicy);
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        reuseAddress = new QCheckBox(frame2);
        reuseAddress->setObjectName(QStringLiteral("reuseAddress"));

        gridLayout->addWidget(reuseAddress, 7, 2, 1, 1);

        label_4 = new QLabel(frame2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_3 = new QLabel(frame2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        reqLabel = new QLineEdit(frame2);
        reqLabel->setObjectName(QStringLiteral("reqLabel"));

        gridLayout->addWidget(reqLabel, 4, 2, 1, 1);

        reqMessage = new QLineEdit(frame2);
        reqMessage->setObjectName(QStringLiteral("reqMessage"));

        gridLayout->addWidget(reqMessage, 6, 2, 1, 1);

        label_5 = new QLabel(frame2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label_2 = new QLabel(frame2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(frame2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        reqAmount = new BitcoinAmountField(frame2);
        reqAmount->setObjectName(QStringLiteral("reqAmount"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reqAmount->sizePolicy().hasHeightForWidth());
        reqAmount->setSizePolicy(sizePolicy1);
        reqAmount->setMinimumSize(QSize(80, 0));
        reqAmount->setMaximumSize(QSize(1000, 100));

        horizontalLayout_6->addWidget(reqAmount);

        useBech32 = new QCheckBox(frame2);
        useBech32->setObjectName(QStringLiteral("useBech32"));
        sizePolicy1.setHeightForWidth(useBech32->sizePolicy().hasHeightForWidth());
        useBech32->setSizePolicy(sizePolicy1);
        useBech32->setMaximumSize(QSize(1000, 16777215));
        useBech32->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(useBech32);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_6, 5, 2, 1, 1);

        label_7 = new QLabel(frame2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        receiveButton = new QPushButton(frame2);
        receiveButton->setObjectName(QStringLiteral("receiveButton"));
        receiveButton->setMinimumSize(QSize(150, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Montserrat"));
        font2.setBold(true);
        font2.setWeight(75);
        receiveButton->setFont(font2);

        horizontalLayout->addWidget(receiveButton);

        clearButton = new QPushButton(frame2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_5->addWidget(frame2);

        frame = new QFrame(frame_BG);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);

        verticalLayout_2->addWidget(label_6);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_2);

        recentRequestsView = new QTableView(frame);
        recentRequestsView->setObjectName(QStringLiteral("recentRequestsView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(recentRequestsView->sizePolicy().hasHeightForWidth());
        recentRequestsView->setSizePolicy(sizePolicy3);
        QPalette palette;
        QBrush brush(QColor(51, 51, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        recentRequestsView->setPalette(palette);
        recentRequestsView->setContextMenuPolicy(Qt::CustomContextMenu);
        recentRequestsView->setTabKeyNavigation(false);
        recentRequestsView->setShowGrid(false);
        recentRequestsView->setSortingEnabled(true);

        verticalLayout_2->addWidget(recentRequestsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showRequestButton = new QPushButton(frame);
        showRequestButton->setObjectName(QStringLiteral("showRequestButton"));
        showRequestButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestButton->setIcon(icon);
        showRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(showRequestButton);

        removeRequestButton = new QPushButton(frame);
        removeRequestButton->setObjectName(QStringLiteral("removeRequestButton"));
        removeRequestButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        removeRequestButton->setIcon(icon1);
        removeRequestButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(removeRequestButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(frame);


        verticalLayout_Master->addWidget(frame_BG);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_Master);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(reqMessage);
        label_2->setBuddy(reqLabel);
        label->setBuddy(reqAmount);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(reqLabel, reqAmount);
        QWidget::setTabOrder(reqAmount, reqMessage);
        QWidget::setTabOrder(reqMessage, reuseAddress);
        QWidget::setTabOrder(reuseAddress, receiveButton);
        QWidget::setTabOrder(receiveButton, clearButton);
        QWidget::setTabOrder(clearButton, recentRequestsView);
        QWidget::setTabOrder(recentRequestsView, showRequestButton);
        QWidget::setTabOrder(showRequestButton, removeRequestButton);

        retranslateUi(ReceiveCoinsDialog);

        QMetaObject::connectSlotsByName(ReceiveCoinsDialog);
    } // setupUi

    void retranslateUi(QWidget *ReceiveCoinsDialog)
    {
        labelOverviewHeaderLeft->setText(QApplication::translate("ReceiveCoinsDialog", "RECEIVE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reuseAddress->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Reuse one of the previously used receiving addresses.<br>Reusing addresses has security and privacy issues.<br>Do not use this unless re-generating a payment request made before.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reuseAddress->setText(QApplication::translate("ReceiveCoinsDialog", "R&euse an existing receiving address (not recommended)", Q_NULLPTR));
        label_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request, which will be displayed when the request is opened. Note: The message will not be sent with the payment over the Retrex network.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ReceiveCoinsDialog", "&Message:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reqLabel->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reqLabel->setPlaceholderText(QApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reqMessage->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request, which will be displayed when the request is opened.<br>Note: The message will not be sent with the payment over the Retrex network.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        reqMessage->setPlaceholderText(QApplication::translate("ReceiveCoinsDialog", "An optional message to attach to the payment request.", Q_NULLPTR));
        label_5->setText(QApplication::translate("ReceiveCoinsDialog", "Use this form to request payments. All fields are <b>optional</b>.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional label to associate with the new receiving address.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ReceiveCoinsDialog", "&Label:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ReceiveCoinsDialog", "&Amount:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        reqAmount->setToolTip(QApplication::translate("ReceiveCoinsDialog", "An optional amount to request. Leave this empty or zero to not request a specific amount.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useBech32->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Bech32 addresses (BIP-173) are cheaper to spend from and offer better protection against typos. When unchecked a P2SH wrapped SegWit address will be created, compatible with older wallets.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        useBech32->setText(QApplication::translate("ReceiveCoinsDialog", "Generate Bech32 address", Q_NULLPTR));
        label_7->setText(QString());
        receiveButton->setText(QApplication::translate("ReceiveCoinsDialog", "&Request payment", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Clear all fields of the form.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("ReceiveCoinsDialog", "Clear", Q_NULLPTR));
        label_6->setText(QApplication::translate("ReceiveCoinsDialog", "Requested payments history", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Show the selected request (does the same as double clicking an entry)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Show", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Remove the selected entries from the list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Remove", Q_NULLPTR));
        Q_UNUSED(ReceiveCoinsDialog);
    } // retranslateUi

};

namespace Ui {
    class ReceiveCoinsDialog: public Ui_ReceiveCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVECOINSDIALOG_H
