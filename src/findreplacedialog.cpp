#include "findreplacedialog.h"
#include <QVBoxLayout>
#include <QPushButton>

FindReplaceDialog::FindReplaceDialog(QWidget *parent) :
    QDialog(parent),
    findLineEdit(new QLineEdit(this)),
    replaceLineEdit(new QLineEdit(this)),
    matchCaseCheckBox(new QCheckBox("Match case", this))
{
    // Create buttons
    QPushButton *findButton = new QPushButton("Find", this);
    QPushButton *replaceButton = new QPushButton("Replace", this);

    // Connect button clicks to their respective slots
    connect(findButton, &QPushButton::clicked, this, &FindReplaceDialog::on_findButton_clicked);
    connect(replaceButton, &QPushButton::clicked, this, &FindReplaceDialog::on_replaceButton_clicked);

    // Set up layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(findLineEdit);
    layout->addWidget(replaceLineEdit);
    layout->addWidget(matchCaseCheckBox);
    layout->addWidget(findButton);
    layout->addWidget(replaceButton);

    setLayout(layout);
}

FindReplaceDialog::~FindReplaceDialog()
{
    // No need to delete children, parent will take care of that
}

void FindReplaceDialog::on_findButton_clicked()
{
    QString searchText = findLineEdit->text(); // Use findLineEdit pointer to get the text
    bool matchCase = matchCaseCheckBox->isChecked(); // Use matchCaseCheckBox pointer to check state
    emit findText(searchText, matchCase); // Emit the find signal
}

void FindReplaceDialog::on_replaceButton_clicked()
{
    QString findText = findLineEdit->text(); // Use findLineEdit pointer to get the text
    QString replaceText = replaceLineEdit->text(); // Use replaceLineEdit pointer to get the text
    bool matchCase = matchCaseCheckBox->isChecked(); // Use matchCaseCheckBox pointer to check state

}
