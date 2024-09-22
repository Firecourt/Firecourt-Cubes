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
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuProject;
    QMenu *menuTrack;
    QMenu *menuSettings;
    QToolBar *toolBar;
    QWidget *browserWidget;
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        menubar = new QMenuBar(centralwidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        menuTrack = new QMenu(menubar);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));

        vboxLayout->addWidget(menubar);

        toolBar = new QToolBar(centralwidget);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));

        vboxLayout->addWidget(toolBar);

        browserWidget = new QWidget(centralwidget);
        browserWidget->setObjectName(QString::fromUtf8("browserWidget"));
        browserWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.1);"));
        browserWidget->setMinimumSize(QSize(250, 0));
        vboxLayout1 = new QVBoxLayout(browserWidget);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);

        vboxLayout->addWidget(browserWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionPreferences);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionFind_Replace);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionShow_Grid);
        menuView->addAction(actionShow_Tools);
        menuView->addAction(actionShow_Mixer);
        menuView->addAction(actionShow_Browser);
        menuView->addAction(actionShow_Inspector);
        menuView->addAction(actionShow_Transport_Controls);
        menuProject->addAction(actionAdd_Track);
        menuProject->addAction(actionDelete_Track);
        menuProject->addAction(actionRename_Track);
        menuProject->addAction(actionGroup_Tracks);
        menuProject->addAction(actionUngroup_Tracks);
        menuProject->addAction(actionFreeze_Track);
        menuProject->addAction(actionBounce_Export_Track);
        menuTrack->addAction(actionSolo);
        menuTrack->addAction(actionMute);
        menuTrack->addAction(actionRecord);
        menuSettings->addAction(actionAudio_Settings);
        menuSettings->addAction(actionMIDI_Settings);
        menuSettings->addAction(actionPreferences);

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
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuProject->setTitle(QCoreApplication::translate("MainWindow", "Project", nullptr));
        menuTrack->setTitle(QCoreApplication::translate("MainWindow", "Track", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
