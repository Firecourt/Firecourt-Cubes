#ifndef TUTORDIALOG_H
#define TUTORDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QProcess>

class TutorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TutorDialog(QWidget *parent = nullptr);
    ~TutorDialog();

signals:
    void tutorStarted();  // Signal to indicate the tutor has started

private slots:
    void on_startButton_clicked();
    void readOutput(); // Slot to handle output from Python script
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus); // Slot for process finished signal

private:
    QLineEdit *questionLineEdit;  // Input field for user question
    QPushButton *startButton;      // Button to start the AI module
    QLabel *responseLabel;         // Label to display AI responses
    QProcess *pythonProcess;       // Process to run the Python AI module
};

#endif // TUTORDIALOG_H
