// settingsdialog.cpp

#include "settingsdialog.h"
#include "ui_settingsdialog.h" // Include the header file

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SettingsDialog) // Initialize ui pointer
{
    ui->setupUi(this);

    // Connect the apply button to the applySettings slot
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &SettingsDialog::applySettings);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &SettingsDialog::reject);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::applySettings()
{
    // Implement the logic to apply the settings here
}
