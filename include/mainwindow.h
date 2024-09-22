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
    ~MainWindow() override;

private:
    Project currentProject;  ///< Instance of the current project
    Ui::MainWindow *ui;
    QUndoStack *undoStack;

    // Custom widgets for the DAW interface
    QDockWidget *browserDock;  ///< Dock for the browser
    QDockWidget *playlistDock;  ///< Dock for the playlist
    QDockWidget *mixerDock;     ///< Dock for the mixer

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

private slots:
    void newProject();           ///< Create a new project
    void openFile();            ///< Open an existing file
    void saveFile();            ///< Save the current file
    void saveFileAs();          ///< Save the current file with a new name
    void importFile();          ///< Import a file into the project
    void exportFile();          ///< Export the current project
    void openPreferences();      ///< Open the preferences dialog
    void exitApp();             ///< Exit the application
    void undoAction();          ///< Undo the last action
    void redoAction();          ///< Redo the last undone action
    void cutAction();           ///< Cut selected content
    void copyAction();          ///< Copy selected content
    void pasteAction();         ///< Paste copied content
    void deleteAction();        ///< Delete selected content
    void selectAll();           ///< Select all content
    void findReplace();         ///< Open find and replace dialog
    void zoomIn();              ///< Zoom in on the workspace
    void zoomOut();             ///< Zoom out from the workspace
    void showGrid();            ///< Toggle grid visibility
    void showTools();           ///< Show tools panel
    void showMixer();           ///< Show mixer panel
    void showBrowser();         ///< Show browser panel
    void showInspector();       ///< Show inspector panel
    void showTransportControls(); ///< Show transport controls
    void addTrack();            ///< Add a new track
    void deleteTrack();         ///< Delete the selected track
    void renameTrack();         ///< Rename the selected track
    void groupTracks();         ///< Group selected tracks
    void ungroupTracks();       ///< Ungroup selected tracks
    void freezeTrack();         ///< Freeze the selected track
    void bounceExportTrack();   ///< Bounce and export the selected track
    void soloTrack();           ///< Solo the selected track
    void muteTrack();           ///< Mute the selected track
    void recordTrack();         ///< Start recording on the selected track
};

#endif // MAINWINDOW_H
