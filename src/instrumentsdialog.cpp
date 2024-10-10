#include "instrumentsdialog.h"

InstrumentsDialog::InstrumentsDialog(QWidget *parent) :
    QDialog(parent),
    instrumentsListWidget(new QListWidget(this)),
    instrumentLineEdit(new QLineEdit(this)),
    addButton(new QPushButton("Add", this)),
    removeButton(new QPushButton("Remove", this))
{
    // Set up the layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *inputLayout = new QHBoxLayout();

    // Configure input layout
    inputLayout->addWidget(instrumentLineEdit);
    inputLayout->addWidget(addButton);
    inputLayout->addWidget(removeButton);

    // Add widgets to the main layout
    mainLayout->addWidget(instrumentsListWidget);
    mainLayout->addLayout(inputLayout);

    // Connect buttons to their respective slots
    connect(addButton, &QPushButton::clicked, this, &InstrumentsDialog::on_addButton_clicked);
    connect(removeButton, &QPushButton::clicked, this, &InstrumentsDialog::on_removeButton_clicked);

    setLayout(mainLayout); // Set the layout for the dialog
}

InstrumentsDialog::~InstrumentsDialog()
{
    // No need to delete children, parent will take care of that
}

void InstrumentsDialog::on_addButton_clicked()
{
    QString instrumentName = instrumentLineEdit->text().trimmed(); // Get the instrument name from input
    if (!instrumentName.isEmpty()) {
        instrumentsListWidget->addItem(instrumentName); // Add the instrument to the list
        emit instrumentAdded(instrumentName); // Emit the signal
        instrumentLineEdit->clear(); // Clear the input field
    }
}

void InstrumentsDialog::on_removeButton_clicked()
{
    QList<QListWidgetItem*> selectedItems = instrumentsListWidget->selectedItems(); // Get selected items
    for (QListWidgetItem *item : selectedItems) {
        emit instrumentRemoved(item->text()); // Emit the signal before removing
        delete instrumentsListWidget->takeItem(instrumentsListWidget->row(item)); // Remove the item from the list
    }
}
