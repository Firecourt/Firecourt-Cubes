#include "tutordialog.h"

TutorDialog::TutorDialog(QWidget *parent) :
    QDialog(parent),
    questionLineEdit(new QLineEdit(this)),
    startButton(new QPushButton("Ask AI", this)),
    responseLabel(new QLabel("Response will appear here...", this)),
    pythonProcess(new QProcess(this))
{
    // Set up the layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(new QLabel("Ask your question:", this));
    mainLayout->addWidget(questionLineEdit);
    mainLayout->addWidget(startButton);
    mainLayout->addWidget(responseLabel);

    // Connect the start button to its slot
    connect(startButton, &QPushButton::clicked, this, &TutorDialog::on_startButton_clicked);

    setLayout(mainLayout); // Set the layout for the dialog
}

TutorDialog::~TutorDialog()
{
    // No need to delete children, parent will take care of that
}

void TutorDialog::on_startButton_clicked()
{
    QString question = questionLineEdit->text().trimmed(); // Get the question from input
    if (!question.isEmpty()) {
        // Launch the Python script with the question as an argument
        QString program = "python"; // Change this if you're using a specific Python version
        QStringList arguments;
        arguments << "path/to/your/tensorflow_script.py" << question; // Specify the path to your Python script

        // Start the process
        pythonProcess->start(program, arguments);

        // Connect signals to handle process output
        connect(pythonProcess, &QProcess::readyReadStandardOutput, this, &TutorDialog::readOutput);

    } else {
        responseLabel->setText("Please enter a question."); // Prompt user for input
    }
}

void TutorDialog::readOutput()
{
    QString output = pythonProcess->readAllStandardOutput();
    responseLabel->setText(output); // Display the response from the AI module
}

void TutorDialog::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    if (exitStatus == QProcess::CrashExit) {
        responseLabel->setText("AI module crashed. Please try again.");
    }
    emit tutorStarted(); // Emit the signal indicating the tutor has started
}
