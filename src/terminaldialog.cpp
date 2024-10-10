#include "terminaldialog.h"

TerminalDialog::TerminalDialog(QWidget *parent) :
    QDialog(parent),
    process(new QProcess(this)),
    outputTextEdit(new QTextEdit(this)),
    commandLineEdit(new QLineEdit(this)),
    sendButton(new QPushButton("Send", this))
{
    // Set the layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *inputLayout = new QHBoxLayout();

    // Configure the text edit
    outputTextEdit->setReadOnly(true);

    // Add widgets to the input layout
    inputLayout->addWidget(commandLineEdit);
    inputLayout->addWidget(sendButton);

    // Add widgets to the main layout
    mainLayout->addWidget(outputTextEdit);
    mainLayout->addLayout(inputLayout);

    // Set the main layout for the dialog
    setLayout(mainLayout);

    // Connect signals and slots
    connect(sendButton, &QPushButton::clicked, this, &TerminalDialog::on_sendButton_clicked);
    connect(process, &QProcess::readyReadStandardOutput, this, &TerminalDialog::onProcessOutput);
    connect(process, &QProcess::readyReadStandardError, this, &TerminalDialog::onProcessOutput);
}

TerminalDialog::~TerminalDialog()
{
    // Cleanup will be handled by Qt
}

void TerminalDialog::executeCommand(const QString &command)
{
    process->start(command);
}

void TerminalDialog::on_sendButton_clicked()
{
    QString command = commandLineEdit->text();
    executeCommand(command);
    commandLineEdit->clear(); // Clear input field after sending command
}

void TerminalDialog::onProcessOutput()
{
    // Read output from the process and display it in the outputTextEdit
    QString output = process->readAllStandardOutput();
    output += process->readAllStandardError(); // Capture any error output

    outputTextEdit->append(output); // Append new output to the text edit
}
