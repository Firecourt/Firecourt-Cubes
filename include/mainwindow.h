#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "trackviewmode.h"
#include <QMainWindow>
#include <QTextEdit>
#include <QList>

class Project; // Forward declaration
class Track;   // Forward declaration
class Group;   // Forward declaration
class Layout; // Forward declaration of Layout class

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    enum ApplicationMode {
        Normal,
        Editing,
        Mixing,
        Recording
    };

    void setApplicationMode(ApplicationMode mode);

private slots:
    // File actions
    void openFile();
    void openProject();
    void saveFile();
    void saveFileAs();
    void exitApplication();

    // Track actions
    void editTrack();
    void deleteTrack();

    // Zoom actions
    void zoomIn();
    void zoomOut();
    void setHorizontalView();
    void setVerticalView();

    // Show terminal action
    void showTerminal();

    // Close Renet action
    void closeRenet();

    // Other actions (from your previous implementation)
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionImport_triggered();
    void on_actionExport_triggered();
    void on_actionPreferences_triggered();
    void on_actionExit_triggered();
    void on_actionAdd_Track_triggered();
    void on_actionDelete_Track_triggered();
    void on_actionRename_Track_triggered();
    void on_actionGroup_Tracks_triggered();
    void on_actionUngroup_Tracks_triggered();
    void on_actionFreeze_Track_triggered();
    void on_actionBounce_Export_Track_triggered();
    void on_actionSolo_triggered();
    void on_actionMute_triggered();
    void on_actionRecord_triggered();
    void on_actionAudio_Settings_triggered();
    void on_actionMIDI_Settings_triggered();
    void on_actionNew_Track_triggered();
    void on_actionSelect_track_triggered();
    void on_actionSelect_all_tracks_triggered();
    void on_actionEdit_track_triggered();
    void on_actionDelete_track_triggered();
    void on_actionHorizontal_triggered();
    void on_actionVertical_triggered();
    void on_actionTerminal_triggered();
    void on_actionMixer_triggered();
    void on_actionEQ_triggered();
    void on_actionInstruments_triggered();
    void on_actionEffects_triggered();
    void on_actionOpen_2_triggered();
    void on_actionDialogbox_triggered();
    void on_actionMessage_Box_triggered();
    void on_actionClose_triggered();
    void on_actionTutor_triggered();
    void on_actionDocumentation_triggered();
    void on_actionWhat_is_triggered();
    void on_actionCompile_triggered();
    void on_actionEmpty_Project_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionNew_Project_triggered();
    void onTextChanged();

private:
    Project *project; // Pointer to the project instance
    ApplicationMode applicationMode; // Current application mode
    QTextEdit *textEdit; // Text editor for notes or lyrics
    Layout *layout; // Layout for the main window

    // Utility functions for track management
    Track* getSelectedTrack(); // Returns the currently selected track
    QList<Track*> getSelectedTracks(); // Returns a list of selected tracks
    Group* getSelectedTrackGroup(); // Returns the selected track group
    void selectTrack(Track* track); // Selects a specific track
    void selectAllTracks(); // Selects all tracks
    void startRecording(); // Starts recording audio
    void setViewMode(TrackViewMode::Mode mode); // Sets the view mode
    void compileProject(); // Compiles the current project
};

#endif // MAINWINDOW_H
