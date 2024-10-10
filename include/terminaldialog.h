#ifndef TERMINALDIALOG_H
#define TERMINALDIALOG_H

#include <QDialog>
#include <QProcess>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class TerminalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TerminalDialog(QWidget *parent = nullptr);
    ~TerminalDialog();

public slots:
    void executeCommand(const QString &command);

private slots:
    void on_sendButton_clicked();
    void onProcessOutput();

private:
    QProcess *process;
    QTextEdit *outputTextEdit;
    QLineEdit *commandLineEdit;
    QPushButton *sendButton;
};

#endif // TERMINALDIALOG_H
