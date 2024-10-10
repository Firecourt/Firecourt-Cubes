#ifndef INSTRUMENTSDIALOG_H
#define INSTRUMENTSDIALOG_H

#include <QDialog>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class InstrumentsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InstrumentsDialog(QWidget *parent = nullptr);
    ~InstrumentsDialog();

signals:
    void instrumentAdded(const QString &instrumentName);
    void instrumentRemoved(const QString &instrumentName);

private slots:
    void on_addButton_clicked();
    void on_removeButton_clicked();

private:
    QListWidget *instrumentsListWidget; // List to display instruments
    QLineEdit *instrumentLineEdit;      // Input field for new instrument name
    QPushButton *addButton;              // Button to add an instrument
    QPushButton *removeButton;           // Button to remove an instrument
};

#endif // INSTRUMENTSDIALOG_H
