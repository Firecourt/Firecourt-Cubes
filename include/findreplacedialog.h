#ifndef FINDREPLACEDIALOG_H
#define FINDREPLACEDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QCheckBox>

class FindReplaceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindReplaceDialog(QWidget *parent = nullptr);
    ~FindReplaceDialog();

signals:
    void findText(const QString &searchText, bool matchCase);
    void replaceText(const QString &findText, const QString &replaceText, bool matchCase);

private slots:
    void on_findButton_clicked();
    void on_replaceButton_clicked();

private:
    QLineEdit *findLineEdit;
    QLineEdit *replaceLineEdit;
    QCheckBox *matchCaseCheckBox;
};

#endif // FINDREPLACEDIALOG_H
