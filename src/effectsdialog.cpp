#include "effectsdialog.h"
#include "effectsdialog.h"
#include <QInputDialog>
#include <QMessageBox>

EffectsDialog::EffectsDialog(QWidget *parent) : QDialog(parent) {
    // Set dialog title
    setWindowTitle("Effects Manager");

    // Create layout
    QVBoxLayout *layout = new QVBoxLayout(this);

    // Create and set up the effects list view
    effectsListView = new QListView(this);
    effectsModel = new QStringListModel(this);
    effectsListView->setModel(effectsModel);
    layout->addWidget(new QLabel("Available Effects:")); // Add label
    layout->addWidget(effectsListView);

    // Create buttons
    addEffectButton = new QPushButton("Add Effect", this);
    removeEffectButton = new QPushButton("Remove Effect", this);
    applyButton = new QPushButton("Apply Effects", this);

    // Connect buttons to slots
    connect(addEffectButton, &QPushButton::clicked, this, &EffectsDialog::addEffect);
    connect(removeEffectButton, &QPushButton::clicked, this, &EffectsDialog::removeEffect);
    connect(applyButton, &QPushButton::clicked, this, &EffectsDialog::applyEffects);

    // Add buttons to layout
    layout->addWidget(addEffectButton);
    layout->addWidget(removeEffectButton);
    layout->addWidget(applyButton);

    // Set layout for the dialog
    setLayout(layout);
}

EffectsDialog::~EffectsDialog() {
    // Destructor
}

void EffectsDialog::addEffect() {
    bool ok;
    QString effectName = QInputDialog::getText(this, tr("Add Effect"),
                                               tr("Effect Name:"), QLineEdit::Normal,
                                               QString(), &ok);
    if (ok && !effectName.isEmpty()) {
        QStringList effects = effectsModel->stringList();
        effects.append(effectName);
        effectsModel->setStringList(effects);
    }
}

void EffectsDialog::removeEffect() {
    QModelIndex index = effectsListView->currentIndex();
    if (index.isValid()) {
        QStringList effects = effectsModel->stringList();
        effects.removeAt(index.row());
        effectsModel->setStringList(effects);
    } else {
        QMessageBox::warning(this, "Remove Effect", "No effect selected to remove.");
    }
}

void EffectsDialog::applyEffects() {
    QStringList effects = effectsModel->stringList();
    // Here, you would implement the logic to apply the selected effects
    // For example, you can emit a signal or call a function to process audio
    QMessageBox::information(this, "Apply Effects", "Effects applied: " + effects.join(", "));
}
