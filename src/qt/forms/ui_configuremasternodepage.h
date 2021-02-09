/********************************************************************************
** Form generated from reading UI file 'configuremasternodepage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREMASTERNODEPAGE_H
#define UI_CONFIGUREMASTERNODEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ConfigureMasternodePage
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QValidatedLineEdit *aliasEdit;
    QLabel *label_2;
    QValidatedLineEdit *vpsIpEdit;
    QLabel *label_3;
    QValidatedLineEdit *privKeyEdit;
    QLabel *label_4;
    QValidatedLineEdit *outputEdit;
    QLabel *label_5;
    QValidatedLineEdit *outputIdEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *AutoFillPrivKey;
    QPushButton *AutoFillOutputs;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureMasternodePage)
    {
        if (ConfigureMasternodePage->objectName().isEmpty())
            ConfigureMasternodePage->setObjectName(QStringLiteral("ConfigureMasternodePage"));
        ConfigureMasternodePage->resize(457, 126);
        verticalLayout = new QVBoxLayout(ConfigureMasternodePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(ConfigureMasternodePage);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        aliasEdit = new QValidatedLineEdit(ConfigureMasternodePage);
        aliasEdit->setObjectName(QStringLiteral("aliasEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, aliasEdit);

        label_2 = new QLabel(ConfigureMasternodePage);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        vpsIpEdit = new QValidatedLineEdit(ConfigureMasternodePage);
        vpsIpEdit->setObjectName(QStringLiteral("vpsIpEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, vpsIpEdit);

        label_3 = new QLabel(ConfigureMasternodePage);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        privKeyEdit = new QValidatedLineEdit(ConfigureMasternodePage);
        privKeyEdit->setObjectName(QStringLiteral("privKeyEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, privKeyEdit);

        label_4 = new QLabel(ConfigureMasternodePage);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        outputEdit = new QValidatedLineEdit(ConfigureMasternodePage);
        outputEdit->setObjectName(QStringLiteral("outputEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, outputEdit);

        label_5 = new QLabel(ConfigureMasternodePage);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        outputIdEdit = new QValidatedLineEdit(ConfigureMasternodePage);
        outputIdEdit->setObjectName(QStringLiteral("outputIdEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, outputIdEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AutoFillPrivKey = new QPushButton(ConfigureMasternodePage);
        AutoFillPrivKey->setObjectName(QStringLiteral("AutoFillPrivKey"));

        horizontalLayout->addWidget(AutoFillPrivKey);

        AutoFillOutputs = new QPushButton(ConfigureMasternodePage);
        AutoFillOutputs->setObjectName(QStringLiteral("AutoFillOutputs"));

        horizontalLayout->addWidget(AutoFillOutputs);

        buttonBox = new QDialogButtonBox(ConfigureMasternodePage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(aliasEdit);
        label_2->setBuddy(vpsIpEdit);
        label_3->setBuddy(privKeyEdit);
        label_4->setBuddy(outputEdit);
        label_5->setBuddy(outputIdEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ConfigureMasternodePage);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureMasternodePage, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureMasternodePage, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureMasternodePage);
    } // setupUi

    void retranslateUi(QDialog *ConfigureMasternodePage)
    {
        ConfigureMasternodePage->setWindowTitle(QApplication::translate("ConfigureMasternodePage", "Edit Address", Q_NULLPTR));
        label->setText(QApplication::translate("ConfigureMasternodePage", "&Alias Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        aliasEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ConfigureMasternodePage", "&VPS IP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        vpsIpEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("ConfigureMasternodePage", "&Priv Key", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        privKeyEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("ConfigureMasternodePage", "&Output", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        outputEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ConfigureMasternodePage", "&Output ID", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        outputIdEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        AutoFillPrivKey->setText(QApplication::translate("ConfigureMasternodePage", "&AutoFill PrivKey", Q_NULLPTR));
        AutoFillOutputs->setText(QApplication::translate("ConfigureMasternodePage", "&AutoFill Outputs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigureMasternodePage: public Ui_ConfigureMasternodePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREMASTERNODEPAGE_H
