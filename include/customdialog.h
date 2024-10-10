#ifndef CUSTOMDIALOG_H
#define CUSTOMDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>

class CustomDialog : public QDialog {
    Q_OBJECT

public:
    explicit CustomDialog(QWidget *parent = nullptr);
    ~CustomDialog();

private:
    QLineEdit* inputField; // Example input field
    QPushButton* okButton;  // OK button
    QPushButton* cancelButton; // Cancel button

private slots:
    void onOkButtonClicked();   // Slot for handling OK button click
    void onCancelButtonClicked(); // Slot for handling Cancel button click
};

#endif // CUSTOMDIALOG_H
