#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <QListWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QMenuBar>
#include <QStatusBar>
#include <QToolBar>
#include <QWidget>
#include <QLineEdit>
#include <QUndoStack>
#include "project.h"
#include <istream>
#include <unistd.h>
#include <iostream>
#include <ostream>
#include <ios>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Project currentProject;  // Declare currentProject as a member variable
    QUndoStack* undoStack;   // Assuming you're using QUndoStack for undo/redo operations

private slots:
    void newProject();
    void openFile();
    void saveFile();
    void saveFileAs();
    void importFile();
    void exportFile();
    void openPreferences();
    void exitApp();
    void undoAction();
    void redoAction();
    void cutAction();
    void copyAction();
    void pasteAction();
    void deleteAction();
    void selectAll();
    void findReplace();
    void zoomIn();
    void zoomOut();
    void showGrid();
    void showTools();
    void showMixer();
    void showBrowser();
    void showInspector();
    void showTransportControls();
    void addTrack();
    void deleteTrack();
    void renameTrack();
    void groupTracks();
    void ungroupTracks();
    void freezeTrack();
    void bounceExportTrack();
    void soloTrack();
    void muteTrack();
    void recordTrack();


private:
    Ui::MainWindow *ui;

    // Custom widgets for DAW
    QDockWidget *browserDock;
    QDockWidget *playlistDock;
    QDockWidget *mixerDock;

    QListWidget *browserList;
    QListWidget *playlist;
    QListWidget *mixerList;

    QWidget *transportControls;
    QPushButton *playButton;
    QPushButton *stopButton;
    QPushButton *recordButton;
    QAction *preferencesAction;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *projectMenu;
    QMenu *trackMenu;

    void setupCustomUi();
    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void createDockWindows();
    void createTransportControls();
    void showSettingsDialog();
    void addSearchField();
};

#endif // MAINWINDOW_H
