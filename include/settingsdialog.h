#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QSpinBox>
#include <QCheckBox>

class SettingsDialog : public QDialog {
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget* parent = nullptr);
    ~SettingsDialog();

private slots:
    void applySettings();

private:
    QLineEdit* usernameEdit;
    QComboBox* themeComboBox;
    QSpinBox* fontSizeSpinBox;
    QComboBox* languageComboBox;
    QCheckBox* notificationsCheckBox;
    QVBoxLayout* layout;
    QDialogButtonBox* buttonBox;
};

#endif // SETTINGSDIALOG_H
