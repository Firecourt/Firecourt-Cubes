#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

namespace Ui { class MainWindow; }


class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionImport_triggered();
    void on_actionExport_triggered();
    void on_actionPreferences_triggered();
    void on_actionExit_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionCut_triggered();
    void on_actionCopy_triggered();
    void on_actionPaste_triggered();
    void on_actionDelete_triggered();
    void on_actionSelect_All_triggered();
    void on_actionFind_Replace_triggered();
    void on_actionZoom_In_triggered();
    void on_actionZoom_Out_triggered();
    void on_actionShow_Grid_triggered();
    void on_actionShow_Tools_triggered();
    void on_actionShow_Mixer_triggered();
    void on_actionShow_Browser_triggered();
    void on_actionShow_Inspector_triggered();
    void on_actionShow_Transport_Controls_triggered();
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
    void on_actionZoom_In_2_triggered();
    void on_actionZoom_Out_2_triggered();
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
    void on_actionTemplates_triggered();
    void on_actionMusician_triggered();
    void on_actionProducer_triggered();
    void on_actionEngineer_triggered();
    void on_actionAppearance_triggered();
    void on_actionGeneral_triggered();
    void on_actionMDI_triggered();
    void on_actionDevices_triggered();
    void on_actionRenet_triggered();
    void on_actionConsole_triggered();
    void on_actionMargins_triggered();
    void on_actionTheme_triggered();
    void on_actionOpen_File_triggered();
    void on_actionOpen_Project_triggered();
};

#endif // MAINWINDOW_H
