/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
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
    QAction *actionEmpty_Project;
    QAction *actionTemplates;
    
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNewProject;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuProject;
    QMenu *menuTrack;
    QToolBar *toolBar;
    QWidget *browserWidget;
    QVBoxLayout *browserLayout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        MainWindow->setMouseTracking(true);
        MainWindow->setAcceptDrops(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        MainWindow->setStyleSheet(
            "QMainWindow { background-color: rgba(30, 30, 30, 0.95); }"
            "QMenuBar { background-color: rgba(50, 50, 50, 0.9); color: #FFFFFF; }"
            "QToolBar { background-color: rgba(50, 50, 50, 0.9); border: none; }"
            "QStatusBar { background-color: rgba(50, 50, 50, 0.9); }"
            "QPushButton { background-color: rgba(100, 100, 100, 0.7); border-radius: 4px; color: white; }"
            "QPushButton:hover { background-color: rgba(150, 150, 150, 0.8); }"
            "QPushButton:pressed { background-color: rgba(200, 0, 0, 0.8); }"
        );

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
        actionEmpty_Project = new QAction(MainWindow);
        actionEmpty_Project->setObjectName(QString::fromUtf8("actionEmpty_Project"));
        actionTemplates = new QAction(MainWindow);
        actionTemplates->setObjectName(QString::fromUtf8("actionTemplates"));

        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));

        menubar = new QMenuBar(centralwidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));

        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNewProject = new QMenu(menuFile);
        menuNewProject->setObjectName(QString::fromUtf8("menuNewProject"));

        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuProject = new QMenu(menubar);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        menuTrack = new QMenu(menubar);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));

        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));

        MainWindow->setCentralWidget(centralwidget);
        MainWindow->setMenuBar(menubar);
        MainWindow->addToolBar(toolBar);
        MainWindow->setStatusBar(new QStatusBar(MainWindow));

        menubar->addMenu(menuFile);
        menubar->addMenu(menuEdit);
        menubar->addMenu(menuView);
        menubar->addMenu(menuProject);
        menubar->addMenu(menuTrack);

        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionFind_Replace);

        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addSeparator();
        menuView->addAction(actionShow_Grid);
        menuView->addAction(actionShow_Tools);
        menuView->addAction(actionShow_Mixer);
        menuView->addAction(actionShow_Browser);
        menuView->addAction(actionShow_Inspector);
        menuView->addAction(actionShow_Transport_Controls);

        menuProject->addAction(actionEmpty_Project);
        menuProject->addAction(actionTemplates);

        menuTrack->addAction(actionAdd_Track);
        menuTrack->addAction(actionDelete_Track);
        menuTrack->addAction(actionRename_Track);
        menuTrack->addAction(actionGroup_Tracks);
        menuTrack->addAction(actionUngroup_Tracks);
        menuTrack->addAction(actionFreeze_Track);
        menuTrack->addAction(actionBounce_Export_Track);
        menuTrack->addSeparator();
        menuTrack->addAction(actionSolo);
        menuTrack->addAction(actionMute);
        menuTrack->addAction(actionRecord);

        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_In);
        toolBar->addAction(actionZoom_Out);
        toolBar->addSeparator();
        toolBar->addAction(actionShow_Browser);
        toolBar->addAction(actionShow_Mixer);
        toolBar->addAction(actionShow_Tools);
        toolBar->addAction(actionShow_Inspector);
        toolBar->addAction(actionShow_Transport_Controls);

        MainWindow->setCentralWidget(centralwidget);
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Firecourt DAW", nullptr));
    }
};

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
