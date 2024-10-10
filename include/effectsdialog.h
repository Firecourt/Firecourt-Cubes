#ifndef EFFECTSDIALOG_H
#define EFFECTSDIALOG_H

#include <QDialog>
#include <QListView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QStringListModel>
#include <QLabel>

class EffectsDialog : public QDialog {
    Q_OBJECT

public:
    explicit EffectsDialog(QWidget *parent = nullptr);
    ~EffectsDialog();

private slots:
    void addEffect();
    void removeEffect();
    void applyEffects();

private:
    QListView *effectsListView;            // List view to display effects
    QStringListModel *effectsModel;        // Model for the list view
    QPushButton *addEffectButton;          // Button to add effects
    QPushButton *removeEffectButton;       // Button to remove effects
    QPushButton *applyButton;               // Button to apply effects
};

#endif // EFFECTSDIALOG_H
