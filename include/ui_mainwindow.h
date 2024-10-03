/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionPreferences;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionFind_Replace;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionShow_Grid;
    QAction *actionShow_Tools;
    QAction *actionShow_Mixer;
    QAction *actionShow_Browser;
    QAction *actionShow_Inspector;
    QAction *actionShow_Transport_Controls;
    QAction *actionAdd_Track;
    QAction *actionDelete_Track;
    QAction *actionRename_Track;
    QAction *actionGroup_Tracks;
    QAction *actionUngroup_Tracks;
    QAction *actionFreeze_Track;
    QAction *actionBounce_Export_Track;
    QAction *actionSolo;
    QAction *actionMute;
    QAction *actionRecord;
    QAction *actionAudio_Settings;
    QAction *actionMIDI_Settings;
    QAction *actionSave_2;
    QAction *actionSave_As_2;
    QAction *actionExit_2;
    QAction *actionNew_Track;
    QAction *actionSelect_track;
    QAction *actionSelect_all_tracks;
    QAction *actionEdit_track;
    QAction *actionDelete_track;
    QAction *actionZoom_In_2;
    QAction *actionZoom_Out_2;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QAction *actionTerminal;
    QAction *actionMixer;
    QAction *actionEQ;
    QAction *actionInstruments;
    QAction *actionEffects;
    QAction *actionOpen_2;
    QAction *actionDialogbox;
    QAction *actionMessage_Box;
    QAction *actionClose;
    QAction *actionTutor;
    QAction *actionDocumentation;
    QAction *actionWhat_is;
    QAction *actionCompile;
    QAction *actionEmpty_Project;
    QAction *actionTemplates;
    QAction *actionMusician;
    QAction *actionProducer;
    QAction *actionEngineer;
    QAction *actionAppearance;
    QAction *actionGeneral;
    QAction *actionMDI;
    QAction *actionDevices;
    QAction *actionRenet;
    QAction *actionConsole;
    QAction *actionMargins;
    QAction *actionTheme;
    QAction *actionOpen_File;
    QAction *actionOpen_Project;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QMenuBar *menubar;
    QMenu *menuFile_2;
    QMenu *menuNew_Project;
    QMenu *menuMode;
    QMenu *menuSettings_2;
    QMenu *menuPreferences;
    QMenu *menuTrack_2;
    QMenu *menuView_2;
    QMenu *menuPlugins;
    QMenu *menuRenet;
    QMenu *menuHelp;
    QToolBar *toolBar;
    QVBoxLayout *vboxLayout1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setMouseTracking(true);
        MainWindow->setTabletTracking(true);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: #121212; /* Dark background */\n"
"    }\n"
"    QMenuBar {\n"
"        background-color: #1e1e1e; /* Dark menu bar */\n"
"        color: white;\n"
"        font-size: 14px;\n"
"    }\n"
"    QToolBar {\n"
"        background-color: #1e1e1e;\n"
"        border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    }\n"
"    QStatusBar {\n"
"        background-color: #1e1e1e;\n"
"        color: white;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #ff3b30; /* Red button */\n"
"        border-radius: 5px;\n"
"        border: 1px solid white;\n"
"        color: white;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #ff453a;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #ff3b30;\n"
"    }\n"
"    QLineEdit, QTextEdit {\n"
"        background-color: #2c2c2c; /* Input fields */\n"
"        color: white;\n"
"        border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    }\n"
"   "));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName(QString::fromUtf8("actionFind_Replace"));
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionShow_Grid = new QAction(MainWindow);
        actionShow_Grid->setObjectName(QString::fromUtf8("actionShow_Grid"));
        actionShow_Tools = new QAction(MainWindow);
        actionShow_Tools->setObjectName(QString::fromUtf8("actionShow_Tools"));
        actionShow_Mixer = new QAction(MainWindow);
        actionShow_Mixer->setObjectName(QString::fromUtf8("actionShow_Mixer"));
        actionShow_Browser = new QAction(MainWindow);
        actionShow_Browser->setObjectName(QString::fromUtf8("actionShow_Browser"));
        actionShow_Inspector = new QAction(MainWindow);
        actionShow_Inspector->setObjectName(QString::fromUtf8("actionShow_Inspector"));
        actionShow_Transport_Controls = new QAction(MainWindow);
        actionShow_Transport_Controls->setObjectName(QString::fromUtf8("actionShow_Transport_Controls"));
        actionAdd_Track = new QAction(MainWindow);
        actionAdd_Track->setObjectName(QString::fromUtf8("actionAdd_Track"));
        actionDelete_Track = new QAction(MainWindow);
        actionDelete_Track->setObjectName(QString::fromUtf8("actionDelete_Track"));
        actionRename_Track = new QAction(MainWindow);
        actionRename_Track->setObjectName(QString::fromUtf8("actionRename_Track"));
        actionGroup_Tracks = new QAction(MainWindow);
        actionGroup_Tracks->setObjectName(QString::fromUtf8("actionGroup_Tracks"));
        actionUngroup_Tracks = new QAction(MainWindow);
        actionUngroup_Tracks->setObjectName(QString::fromUtf8("actionUngroup_Tracks"));
        actionFreeze_Track = new QAction(MainWindow);
        actionFreeze_Track->setObjectName(QString::fromUtf8("actionFreeze_Track"));
        actionBounce_Export_Track = new QAction(MainWindow);
        actionBounce_Export_Track->setObjectName(QString::fromUtf8("actionBounce_Export_Track"));
        actionSolo = new QAction(MainWindow);
        actionSolo->setObjectName(QString::fromUtf8("actionSolo"));
        actionMute = new QAction(MainWindow);
        actionMute->setObjectName(QString::fromUtf8("actionMute"));
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionAudio_Settings = new QAction(MainWindow);
        actionAudio_Settings->setObjectName(QString::fromUtf8("actionAudio_Settings"));
        actionMIDI_Settings = new QAction(MainWindow);
        actionMIDI_Settings->setObjectName(QString::fromUtf8("actionMIDI_Settings"));
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName(QString::fromUtf8("actionSave_2"));
        actionSave_As_2 = new QAction(MainWindow);
        actionSave_As_2->setObjectName(QString::fromUtf8("actionSave_As_2"));
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        actionNew_Track = new QAction(MainWindow);
        actionNew_Track->setObjectName(QString::fromUtf8("actionNew_Track"));
        actionSelect_track = new QAction(MainWindow);
        actionSelect_track->setObjectName(QString::fromUtf8("actionSelect_track"));
        actionSelect_all_tracks = new QAction(MainWindow);
        actionSelect_all_tracks->setObjectName(QString::fromUtf8("actionSelect_all_tracks"));
        actionEdit_track = new QAction(MainWindow);
        actionEdit_track->setObjectName(QString::fromUtf8("actionEdit_track"));
        actionDelete_track = new QAction(MainWindow);
        actionDelete_track->setObjectName(QString::fromUtf8("actionDelete_track"));
        actionZoom_In_2 = new QAction(MainWindow);
        actionZoom_In_2->setObjectName(QString::fromUtf8("actionZoom_In_2"));
        actionZoom_Out_2 = new QAction(MainWindow);
        actionZoom_Out_2->setObjectName(QString::fromUtf8("actionZoom_Out_2"));
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        actionTerminal = new QAction(MainWindow);
        actionTerminal->setObjectName(QString::fromUtf8("actionTerminal"));
        actionMixer = new QAction(MainWindow);
        actionMixer->setObjectName(QString::fromUtf8("actionMixer"));
        actionEQ = new QAction(MainWindow);
        actionEQ->setObjectName(QString::fromUtf8("actionEQ"));
        actionInstruments = new QAction(MainWindow);
        actionInstruments->setObjectName(QString::fromUtf8("actionInstruments"));
        actionEffects = new QAction(MainWindow);
        actionEffects->setObjectName(QString::fromUtf8("actionEffects"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QString::fromUtf8("actionOpen_2"));
        actionDialogbox = new QAction(MainWindow);
        actionDialogbox->setObjectName(QString::fromUtf8("actionDialogbox"));
        actionMessage_Box = new QAction(MainWindow);
        actionMessage_Box->setObjectName(QString::fromUtf8("actionMessage_Box"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionTutor = new QAction(MainWindow);
        actionTutor->setObjectName(QString::fromUtf8("actionTutor"));
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionWhat_is = new QAction(MainWindow);
        actionWhat_is->setObjectName(QString::fromUtf8("actionWhat_is"));
        actionCompile = new QAction(MainWindow);
        actionCompile->setObjectName(QString::fromUtf8("actionCompile"));
        actionEmpty_Project = new QAction(MainWindow);
        actionEmpty_Project->setObjectName(QString::fromUtf8("actionEmpty_Project"));
        actionTemplates = new QAction(MainWindow);
        actionTemplates->setObjectName(QString::fromUtf8("actionTemplates"));
        actionMusician = new QAction(MainWindow);
        actionMusician->setObjectName(QString::fromUtf8("actionMusician"));
        actionProducer = new QAction(MainWindow);
        actionProducer->setObjectName(QString::fromUtf8("actionProducer"));
        actionEngineer = new QAction(MainWindow);
        actionEngineer->setObjectName(QString::fromUtf8("actionEngineer"));
        actionAppearance = new QAction(MainWindow);
        actionAppearance->setObjectName(QString::fromUtf8("actionAppearance"));
        actionGeneral = new QAction(MainWindow);
        actionGeneral->setObjectName(QString::fromUtf8("actionGeneral"));
        actionMDI = new QAction(MainWindow);
        actionMDI->setObjectName(QString::fromUtf8("actionMDI"));
        actionDevices = new QAction(MainWindow);
        actionDevices->setObjectName(QString::fromUtf8("actionDevices"));
        actionRenet = new QAction(MainWindow);
        actionRenet->setObjectName(QString::fromUtf8("actionRenet"));
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionMargins = new QAction(MainWindow);
        actionMargins->setObjectName(QString::fromUtf8("actionMargins"));
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionOpen_Project = new QAction(MainWindow);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        menubar = new QMenuBar(centralwidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menuFile_2 = new QMenu(menubar);
        menuFile_2->setObjectName(QString::fromUtf8("menuFile_2"));
        menuNew_Project = new QMenu(menuFile_2);
        menuNew_Project->setObjectName(QString::fromUtf8("menuNew_Project"));
        menuMode = new QMenu(menuFile_2);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        menuSettings_2 = new QMenu(menuFile_2);
        menuSettings_2->setObjectName(QString::fromUtf8("menuSettings_2"));
        menuPreferences = new QMenu(menuFile_2);
        menuPreferences->setObjectName(QString::fromUtf8("menuPreferences"));
        menuTrack_2 = new QMenu(menubar);
        menuTrack_2->setObjectName(QString::fromUtf8("menuTrack_2"));
        menuView_2 = new QMenu(menubar);
        menuView_2->setObjectName(QString::fromUtf8("menuView_2"));
        menuPlugins = new QMenu(menubar);
        menuPlugins->setObjectName(QString::fromUtf8("menuPlugins"));
        menuRenet = new QMenu(menubar);
        menuRenet->setObjectName(QString::fromUtf8("menuRenet"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));

        vboxLayout->addWidget(menubar);

        toolBar = new QToolBar(centralwidget);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));

        vboxLayout->addWidget(toolBar);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));

        vboxLayout->addLayout(vboxLayout1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_2->menuAction());
        menubar->addAction(menuTrack_2->menuAction());
        menubar->addAction(menuView_2->menuAction());
        menubar->addAction(menuPlugins->menuAction());
        menubar->addAction(menuRenet->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile_2->addAction(menuNew_Project->menuAction());
        menuFile_2->addAction(actionOpen_File);
        menuFile_2->addAction(actionOpen_Project);
        menuFile_2->addAction(actionSave_2);
        menuFile_2->addAction(actionSave_As_2);
        menuFile_2->addAction(menuMode->menuAction());
        menuFile_2->addAction(menuSettings_2->menuAction());
        menuFile_2->addAction(menuPreferences->menuAction());
        menuFile_2->addAction(actionExit_2);
        menuFile_2->addAction(actionCompile);
        menuNew_Project->addAction(actionEmpty_Project);
        menuNew_Project->addAction(actionTemplates);
        menuMode->addAction(actionMusician);
        menuMode->addAction(actionProducer);
        menuMode->addAction(actionEngineer);
        menuSettings_2->addAction(actionAppearance);
        menuSettings_2->addAction(actionGeneral);
        menuSettings_2->addAction(actionMDI);
        menuSettings_2->addAction(actionDevices);
        menuSettings_2->addAction(actionRenet);
        menuPreferences->addAction(actionConsole);
        menuPreferences->addAction(actionMargins);
        menuPreferences->addAction(actionTheme);
        menuTrack_2->addAction(actionNew_Track);
        menuTrack_2->addAction(actionSelect_track);
        menuTrack_2->addAction(actionSelect_all_tracks);
        menuTrack_2->addAction(actionEdit_track);
        menuTrack_2->addAction(actionDelete_track);
        menuView_2->addAction(actionZoom_In_2);
        menuView_2->addAction(actionZoom_Out_2);
        menuView_2->addAction(actionHorizontal);
        menuView_2->addAction(actionVertical);
        menuView_2->addAction(actionTerminal);
        menuPlugins->addAction(actionMixer);
        menuPlugins->addAction(actionEQ);
        menuPlugins->addAction(actionInstruments);
        menuPlugins->addAction(actionEffects);
        menuRenet->addAction(actionOpen_2);
        menuRenet->addAction(actionDialogbox);
        menuRenet->addAction(actionMessage_Box);
        menuRenet->addAction(actionClose);
        menuHelp->addAction(actionTutor);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionWhat_is);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Firecourt Cubes", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save...", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Sa&ve As...", nullptr));
        actionImport->setText(QCoreApplication::translate("MainWindow", "&Import...", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "&Export...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "&Preferences...", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "&Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "&Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "&Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "C&opy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "&Select All", nullptr));
        actionFind_Replace->setText(QCoreApplication::translate("MainWindow", "&Find Replace", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "&Zoom In", nullptr));
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom &Out", nullptr));
        actionShow_Grid->setText(QCoreApplication::translate("MainWindow", "&Show Grid", nullptr));
        actionShow_Tools->setText(QCoreApplication::translate("MainWindow", "S&how Tools", nullptr));
        actionShow_Mixer->setText(QCoreApplication::translate("MainWindow", "Show &Mixer", nullptr));
        actionShow_Browser->setText(QCoreApplication::translate("MainWindow", "Show &Browser", nullptr));
        actionShow_Inspector->setText(QCoreApplication::translate("MainWindow", "Show &Inspector", nullptr));
        actionShow_Transport_Controls->setText(QCoreApplication::translate("MainWindow", "Show &Transport Controls", nullptr));
        actionAdd_Track->setText(QCoreApplication::translate("MainWindow", "&Add Track", nullptr));
        actionDelete_Track->setText(QCoreApplication::translate("MainWindow", "&Delete Track", nullptr));
        actionRename_Track->setText(QCoreApplication::translate("MainWindow", "&Rename Track", nullptr));
        actionGroup_Tracks->setText(QCoreApplication::translate("MainWindow", "&Group Tracks", nullptr));
        actionUngroup_Tracks->setText(QCoreApplication::translate("MainWindow", "&Ungroup Tracks", nullptr));
        actionFreeze_Track->setText(QCoreApplication::translate("MainWindow", "&Freeze Track", nullptr));
        actionBounce_Export_Track->setText(QCoreApplication::translate("MainWindow", "&Bounce/Export Track", nullptr));
        actionSolo->setText(QCoreApplication::translate("MainWindow", "&Solo", nullptr));
        actionMute->setText(QCoreApplication::translate("MainWindow", "&Mute", nullptr));
        actionRecord->setText(QCoreApplication::translate("MainWindow", "&Record", nullptr));
        actionAudio_Settings->setText(QCoreApplication::translate("MainWindow", "&Audio Settings", nullptr));
        actionMIDI_Settings->setText(QCoreApplication::translate("MainWindow", "&MIDI Settings", nullptr));
        actionSave_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As_2->setText(QCoreApplication::translate("MainWindow", "Save As ...", nullptr));
        actionExit_2->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        actionNew_Track->setText(QCoreApplication::translate("MainWindow", "New Track", nullptr));
        actionSelect_track->setText(QCoreApplication::translate("MainWindow", "Select track ", nullptr));
        actionSelect_all_tracks->setText(QCoreApplication::translate("MainWindow", "Select all tracks", nullptr));
        actionEdit_track->setText(QCoreApplication::translate("MainWindow", "Edit track", nullptr));
        actionDelete_track->setText(QCoreApplication::translate("MainWindow", "Delete track", nullptr));
        actionZoom_In_2->setText(QCoreApplication::translate("MainWindow", "Zoom In ", nullptr));
        actionZoom_Out_2->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionHorizontal->setText(QCoreApplication::translate("MainWindow", "Horizontal", nullptr));
        actionVertical->setText(QCoreApplication::translate("MainWindow", "Vertical ", nullptr));
        actionTerminal->setText(QCoreApplication::translate("MainWindow", "Terminal ", nullptr));
        actionMixer->setText(QCoreApplication::translate("MainWindow", "Mixer", nullptr));
        actionEQ->setText(QCoreApplication::translate("MainWindow", "EQ", nullptr));
        actionInstruments->setText(QCoreApplication::translate("MainWindow", "Instruments ", nullptr));
        actionEffects->setText(QCoreApplication::translate("MainWindow", "Effects", nullptr));
        actionOpen_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionDialogbox->setText(QCoreApplication::translate("MainWindow", "Dialogbox ", nullptr));
        actionMessage_Box->setText(QCoreApplication::translate("MainWindow", "Message Box", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close...", nullptr));
        actionTutor->setText(QCoreApplication::translate("MainWindow", "Tutor", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "Documentation ", nullptr));
        actionWhat_is->setText(QCoreApplication::translate("MainWindow", "What is?", nullptr));
        actionCompile->setText(QCoreApplication::translate("MainWindow", "Compile", nullptr));
        actionEmpty_Project->setText(QCoreApplication::translate("MainWindow", "Empty Project", nullptr));
        actionTemplates->setText(QCoreApplication::translate("MainWindow", "Templates", nullptr));
        actionMusician->setText(QCoreApplication::translate("MainWindow", "Musician", nullptr));
        actionProducer->setText(QCoreApplication::translate("MainWindow", "Producer", nullptr));
        actionEngineer->setText(QCoreApplication::translate("MainWindow", "Engineer", nullptr));
        actionAppearance->setText(QCoreApplication::translate("MainWindow", "Appearance ", nullptr));
        actionGeneral->setText(QCoreApplication::translate("MainWindow", "General", nullptr));
        actionMDI->setText(QCoreApplication::translate("MainWindow", "MIDI", nullptr));
        actionDevices->setText(QCoreApplication::translate("MainWindow", "Devices", nullptr));
        actionRenet->setText(QCoreApplication::translate("MainWindow", "Renet", nullptr));
        actionConsole->setText(QCoreApplication::translate("MainWindow", "Console ", nullptr));
        actionMargins->setText(QCoreApplication::translate("MainWindow", "Margins", nullptr));
        actionTheme->setText(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File ", nullptr));
        actionOpen_Project->setText(QCoreApplication::translate("MainWindow", "Open Project", nullptr));
        menuFile_2->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuNew_Project->setTitle(QCoreApplication::translate("MainWindow", "New Project..", nullptr));
        menuMode->setTitle(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        menuSettings_2->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuPreferences->setTitle(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        menuTrack_2->setTitle(QCoreApplication::translate("MainWindow", "Track", nullptr));
        menuView_2->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuPlugins->setTitle(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
        menuRenet->setTitle(QCoreApplication::translate("MainWindow", "Renet", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
