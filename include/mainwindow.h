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
#include <iostream>
#include "ui_mainwindow.h"
namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class provides the main interface for the Digital Audio Workstation (DAW).
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Project currentProject;  ///< Instance of the current project
    QScopedPointer<QUndoStack> undoStack;  ///< Undo/redo stack

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
    QScopedPointer<Ui::MainWindow> ui;  ///< Pointer to the UI

    // Custom widgets for the DAW interface
    QDockWidget *browserDock;
    QDockWidget *playlistDock;
    QDockWidget *mixerDock;

    QListWidget *browserList;  ///< List widget for the browser
    QListWidget *playlist;      ///< List widget for the playlist
    QListWidget *mixerList;     ///< List widget for the mixer

    QWidget *transportControls;  ///< Widget containing transport controls
    QPushButton *playButton;     ///< Button to play audio
    QPushButton *stopButton;     ///< Button to stop audio
    QPushButton *recordButton;   ///< Button to record audio

    QAction *preferencesAction;   ///< Action for opening preferences
    QMenu *fileMenu;              ///< File menu
    QMenu *editMenu;              ///< Edit menu
    QMenu *viewMenu;              ///< View menu
    QMenu *projectMenu;           ///< Project menu
    QMenu *trackMenu;             ///< Track menu

    void setupCustomUi();         ///< Sets up the custom UI elements
    void createActions();         ///< Creates actions for menus and toolbars
    void createMenus();           ///< Creates menus
    void createToolBars();        ///< Creates toolbars
};

#endif // MAINWINDOW_H
