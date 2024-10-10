#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtextedit.h"
#include "trackviewmode.h"
#include <QMainWindow>
#include <QList>

class Project; // Forward declaration
class Track;   // Forward declaration
class Group;   // Forward declaration

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
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionImport_triggered();
    void on_actionExport_triggered();
    void on_actionPreferences_triggered();
    void on_actionExit_triggered();

    // Track actions
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

    // Settings actions
    void on_actionAudio_Settings_triggered();
    void on_actionMIDI_Settings_triggered();

    // Edit actions
    void on_actionNew_Track_triggered();
    void on_actionSelect_track_triggered();
    void on_actionSelect_all_tracks_triggered();
    void on_actionEdit_track_triggered();
    void on_actionDelete_track_triggered();

    // View actions
    void on_actionZoom_In_triggered();
    void on_actionZoom_Out_triggered();
    void on_actionHorizontal_triggered();
    void on_actionVertical_triggered();
    void on_actionTerminal_triggered();
    void on_actionMixer_triggered();
    void on_actionEQ_triggered();
    void on_actionInstruments_triggered();
    void on_actionEffects_triggered();

    // Miscellaneous actions
    void on_actionOpen_2_triggered();
    void on_actionDialogbox_triggered();
    void on_actionMessage_Box_triggered();
    void on_actionClose_triggered();
    void on_actionTutor_triggered();
    void on_actionDocumentation_triggered();
    void on_actionWhat_is_triggered();
    void on_actionCompile_triggered();
    void on_actionEmpty_Project_triggered();
    void on_actionUndo_triggered(); // Add this
    void on_actionRedo_triggered(); // Add this

    // File operations
    void on_actionNew_Project_triggered(); // Add this


    void openFile();
    void setViewMode(TrackViewMode::Mode mode);
    void compileProject();
    void editTrack(Track* track);
    void onTextChanged();

private:
    Project *project; // Pointer to the project instance
    ApplicationMode applicationMode; // Current application mode
    QTextEdit *textEdit; // Text editor for notes or lyrics

    // Setup functions
    void setupUI(); // Initializes UI components
    void setupConnections(); // Connects signals and slots

    // Utility functions for track management
    Track* getSelectedTrack(); // Returns the currently selected track
    QList<Track*> getSelectedTracks(); // Returns a list of selected tracks
    Group* getSelectedTrackGroup(); // Returns the selected track group
    void selectTrack(Track* track); // Selects a specific track
    void selectAllTracks(); // Selects all tracks
    void startRecording(); // Starts recording audio
    void zoomIn(); // Zooms in the view
    void zoomOut(); // Zooms out the view
};

#endif // MAINWINDOW_H
