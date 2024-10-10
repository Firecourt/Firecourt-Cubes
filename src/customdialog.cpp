#include "customdialog.h"

CustomDialog::CustomDialog(QWidget *parent)
    : QDialog(parent), inputField(new QLineEdit(this)),
    okButton(new QPushButton("OK", this)),
    cancelButton(new QPushButton("Cancel", this)) {

    // Set up the dialog layout
    QVBoxLayout* layout = new QVBoxLayout(this);

    QLabel* label = new QLabel("Enter your input:", this); // Label for input
    layout->addWidget(label);
    layout->addWidget(inputField); // Add input field to layout
    layout->addWidget(okButton);    // Add OK button
    layout->addWidget(cancelButton); // Add Cancel button

    // Connect signals to slots
    connect(okButton, &QPushButton::clicked, this, &CustomDialog::onOkButtonClicked);
    connect(cancelButton, &QPushButton::clicked, this, &CustomDialog::onCancelButtonClicked);

    setLayout(layout); // Set the layout for the dialog
    setWindowTitle("Custom Dialog"); // Set window title
}

CustomDialog::~CustomDialog() {
    // Destructor implementation (if needed)
}

void CustomDialog::onOkButtonClicked() {
    // Handle OK button click
    // For example, retrieve input and process it
    QString input = inputField->text();
    // Process input as needed
    accept(); // Close the dialog and return accepted
}

void CustomDialog::onCancelButtonClicked() {
    // Handle Cancel button click
    reject(); // Close the dialog and return rejected
}
