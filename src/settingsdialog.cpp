#include "../include/settingsdialog.h"
#include <QPalette>
#include <QStyleFactory>

SettingsDialog::SettingsDialog(QWidget* parent)
    : QDialog(parent)
{
    // Create layout
    layout = new QVBoxLayout(this);

    // Set window title and size
    setWindowTitle("Settings");
    setFixedSize(300, 400);

    // Create and add username label and line edit
    QLabel* usernameLabel = new QLabel("Username:", this);
    usernameEdit = new QLineEdit(this);
    layout->addWidget(usernameLabel);
    layout->addWidget(usernameEdit);

    // Create and add theme selection label and combo box
    QLabel* themeLabel = new QLabel("Theme:", this);
    themeComboBox = new QComboBox(this);
    themeComboBox->addItems({"Light", "Dark", "System Default"});
    layout->addWidget(themeLabel);
    layout->addWidget(themeComboBox);

    // Create and add font size selection
    QLabel* fontSizeLabel = new QLabel("Font Size:", this);
    fontSizeSpinBox = new QSpinBox(this);
    fontSizeSpinBox->setRange(8, 40); // Range for font size
    fontSizeSpinBox->setValue(12);    // Default font size
    layout->addWidget(fontSizeLabel);
    layout->addWidget(fontSizeSpinBox);

    // Create and add language selection
    QLabel* languageLabel = new QLabel("Language:", this);
    languageComboBox = new QComboBox(this);
    languageComboBox->addItems({"English", "Spanish", "French", "German"});
    layout->addWidget(languageLabel);
    layout->addWidget(languageComboBox);

    // Create and add notifications checkbox
    notificationsCheckBox = new QCheckBox("Enable Notifications", this);
    layout->addWidget(notificationsCheckBox);

    // Create and add the button box
    buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, this);
    layout->addWidget(buttonBox);

    // Connect signals and slots
    connect(buttonBox, &QDialogButtonBox::accepted, this, &SettingsDialog::applySettings);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &SettingsDialog::reject);

    setLayout(layout); // Set the layout for the dialog

    // Optionally set a style
    setStyleSheet("QDialog { background-color: #f0f0f0; } QLabel { font-weight: bold; }");
}

SettingsDialog::~SettingsDialog() {
    // Destructor logic, if needed
}

void SettingsDialog::applySettings() {
    // Read values and save them or apply them
    QString username = usernameEdit->text();
    QString selectedTheme = themeComboBox->currentText();
    int fontSize = fontSizeSpinBox->value();
    QString selectedLanguage = languageComboBox->currentText();
    bool notificationsEnabled = notificationsCheckBox->isChecked();

    // TODO: Add logic to handle the settings (e.g., save them or apply them)
    // Example: Apply font size to application, change theme, etc.

    accept(); // Close the dialog with acceptance status
}
