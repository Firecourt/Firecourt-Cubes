#ifndef LAYOUT_H
#define LAYOUT_H

#include <QWidget>
#include "settingsdialog.h"

class MainWindow; // Forward declaration

class Layout : public QWidget {
    Q_OBJECT

public:
    explicit Layout(MainWindow *mainWindow, QWidget *parent = nullptr);

signals: // Signal declarations
    void fileOpenRequested();
    void projectOpenRequested();
    void fileSaveRequested();
    void fileSaveAsRequested();
    void exitRequested();
    void editTrackRequested();
    void deleteTrackRequested();
    void zoomInRequested();
    void zoomOutRequested();
    void setHorizontalViewRequested();
    void setVerticalViewRequested();
    void closeRenetRequested();
    void openRenet();
    void openTutor();

public slots: // Slot declarations
    void openSettingsDialog();
    void showTerminalRequested(); // Ensure it's only declared here

private:
    MainWindow *mainWindow;
    SettingsDialog *settingsDialog;
};

#endif // LAYOUT_H
