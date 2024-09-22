/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QWidget *mainWidget;
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *generalTab;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLabel *label1;
    QLineEdit *emailLineEdit;
    QWidget *appearanceTab;
    QFormLayout *formLayout1;
    QLabel *label2;
    QComboBox *themeComboBox;
    QLabel *label3;
    QSpinBox *fontSizeSpinBox;
    QWidget *audioTab;
    QFormLayout *formLayout2;
    QLabel *label4;
    QComboBox *audioOutputComboBox;
    QLabel *label5;
    QSlider *volumeSlider;
    QWidget *advancedTab;
    QFormLayout *formLayout3;
    QLabel *label6;
    QLineEdit *advancedLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(600, 400);
        SettingsDialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"        background-color: rgba(30, 30, 30, 0.9);\n"
"        color: white;\n"
"    }\n"
"    QTabWidget::pane {\n"
"        border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    }\n"
"    QTabBar::tab {\n"
"        background: rgba(50, 50, 50, 0.7);\n"
"        color: white;\n"
"        padding: 10px;\n"
"        border: 1px solid rgba(255, 255, 255, 0.3);\n"
"        border-radius: 5px;\n"
"    }\n"
"    QTabBar::tab:selected {\n"
"        background: rgba(70, 70, 70, 0.9);\n"
"    }\n"
"    QPushButton {\n"
"        background-color: rgba(70, 70, 70, 0.8);\n"
"        border: 1px solid rgba(255, 255, 255, 0.3);\n"
"        color: white;\n"
"        border-radius: 5px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(100, 100, 100, 0.9);\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: rgba(150, 150, 150, 1);\n"
"    }\n"
"    QLabel {\n"
"        color: white;\n"
"    }\n"
"    QLineEdit {\n"
"        background-color: rgba(60, 60, 60, 0.8);\n"
"      "
                        "  color: white;\n"
"        border: 1px solid rgba(255, 255, 255, 0.3);\n"
"        border-radius: 3px;\n"
"    }\n"
"    QComboBox {\n"
"        background-color: rgba(60, 60, 60, 0.8);\n"
"        color: white;\n"
"        border: 1px solid rgba(255, 255, 255, 0.3);\n"
"        border-radius: 3px;\n"
"    }\n"
"    QCheckBox {\n"
"        color: white;\n"
"    }"));
        mainWidget = new QWidget(SettingsDialog);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        vboxLayout = new QVBoxLayout(mainWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(mainWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        generalTab = new QWidget();
        generalTab->setObjectName(QString::fromUtf8("generalTab"));
        formLayout = new QFormLayout(generalTab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(generalTab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        usernameLineEdit = new QLineEdit(generalTab);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        label1 = new QLabel(generalTab);
        label1->setObjectName(QString::fromUtf8("label1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label1);

        emailLineEdit = new QLineEdit(generalTab);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        tabWidget->addTab(generalTab, QString());
        appearanceTab = new QWidget();
        appearanceTab->setObjectName(QString::fromUtf8("appearanceTab"));
        formLayout1 = new QFormLayout(appearanceTab);
        formLayout1->setObjectName(QString::fromUtf8("formLayout1"));
        label2 = new QLabel(appearanceTab);
        label2->setObjectName(QString::fromUtf8("label2"));

        formLayout1->setWidget(0, QFormLayout::LabelRole, label2);

        themeComboBox = new QComboBox(appearanceTab);
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));

        formLayout1->setWidget(0, QFormLayout::FieldRole, themeComboBox);

        label3 = new QLabel(appearanceTab);
        label3->setObjectName(QString::fromUtf8("label3"));

        formLayout1->setWidget(1, QFormLayout::LabelRole, label3);

        fontSizeSpinBox = new QSpinBox(appearanceTab);
        fontSizeSpinBox->setObjectName(QString::fromUtf8("fontSizeSpinBox"));
        fontSizeSpinBox->setMinimum(8);
        fontSizeSpinBox->setMaximum(36);

        formLayout1->setWidget(1, QFormLayout::FieldRole, fontSizeSpinBox);

        tabWidget->addTab(appearanceTab, QString());
        audioTab = new QWidget();
        audioTab->setObjectName(QString::fromUtf8("audioTab"));
        formLayout2 = new QFormLayout(audioTab);
        formLayout2->setObjectName(QString::fromUtf8("formLayout2"));
        label4 = new QLabel(audioTab);
        label4->setObjectName(QString::fromUtf8("label4"));

        formLayout2->setWidget(0, QFormLayout::LabelRole, label4);

        audioOutputComboBox = new QComboBox(audioTab);
        audioOutputComboBox->addItem(QString());
        audioOutputComboBox->addItem(QString());
        audioOutputComboBox->setObjectName(QString::fromUtf8("audioOutputComboBox"));

        formLayout2->setWidget(0, QFormLayout::FieldRole, audioOutputComboBox);

        label5 = new QLabel(audioTab);
        label5->setObjectName(QString::fromUtf8("label5"));

        formLayout2->setWidget(1, QFormLayout::LabelRole, label5);

        volumeSlider = new QSlider(audioTab);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        volumeSlider->setMinimum(0);
        volumeSlider->setMaximum(100);

        formLayout2->setWidget(1, QFormLayout::FieldRole, volumeSlider);

        tabWidget->addTab(audioTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QString::fromUtf8("advancedTab"));
        formLayout3 = new QFormLayout(advancedTab);
        formLayout3->setObjectName(QString::fromUtf8("formLayout3"));
        label6 = new QLabel(advancedTab);
        label6->setObjectName(QString::fromUtf8("label6"));

        formLayout3->setWidget(0, QFormLayout::LabelRole, label6);

        advancedLineEdit = new QLineEdit(advancedTab);
        advancedLineEdit->setObjectName(QString::fromUtf8("advancedLineEdit"));

        formLayout3->setWidget(0, QFormLayout::FieldRole, advancedLineEdit);

        tabWidget->addTab(advancedTab, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(mainWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 340, 541, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        generalTab->setTitle(QCoreApplication::translate("SettingsDialog", "General", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Username:", nullptr));
        label1->setText(QCoreApplication::translate("SettingsDialog", "Email:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QCoreApplication::translate("SettingsDialog", "Page", nullptr));
        appearanceTab->setTitle(QCoreApplication::translate("SettingsDialog", "Appearance", nullptr));
        label2->setText(QCoreApplication::translate("SettingsDialog", "Theme:", nullptr));
        themeComboBox->setItemText(0, QCoreApplication::translate("SettingsDialog", "Light", nullptr));
        themeComboBox->setItemText(1, QCoreApplication::translate("SettingsDialog", "Dark", nullptr));

        label3->setText(QCoreApplication::translate("SettingsDialog", "Font Size:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(appearanceTab), QCoreApplication::translate("SettingsDialog", "Page", nullptr));
        audioTab->setTitle(QCoreApplication::translate("SettingsDialog", "Audio", nullptr));
        label4->setText(QCoreApplication::translate("SettingsDialog", "Audio Output:", nullptr));
        audioOutputComboBox->setItemText(0, QCoreApplication::translate("SettingsDialog", "Default", nullptr));
        audioOutputComboBox->setItemText(1, QCoreApplication::translate("SettingsDialog", "External Device", nullptr));

        label5->setText(QCoreApplication::translate("SettingsDialog", "Volume:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(audioTab), QCoreApplication::translate("SettingsDialog", "Page", nullptr));
        advancedTab->setTitle(QCoreApplication::translate("SettingsDialog", "Advanced", nullptr));
        label6->setText(QCoreApplication::translate("SettingsDialog", "Advanced Setting:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(advancedTab), QCoreApplication::translate("SettingsDialog", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
