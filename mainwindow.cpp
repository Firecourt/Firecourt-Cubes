#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custommenubar.h"
#include <QMessageBox>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupCustomUi();

    // Create preferences action
    preferencesAction = new QAction(tr("Preferences"), this);
    connect(preferencesAction, &QAction::triggered, this, &MainWindow::showSettingsDialog);

    // Add preferences action to the file menu
    ui->menuFile_2->addAction(preferencesAction);

    // Replace QMenuBar with CustomMenuBar
 /*   CustomMenuBar *customMenuBar = new CustomMenuBar(this);
    customMenuBar->addMenu(ui->menuFile_2); // Add menus
    setMenuBar(customMenuBar); // Set the custom menu bar */
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showSettingsDialog()
{
    // Create and show the settings dialog
    SettingsDialog settingsDialog(this);
    settingsDialog.exec();
}

void MainWindow::setupCustomUi()
{
    setWindowTitle("Firecourt Studio");
    setStyleSheet("background-color: #1e1e1e; color: white;");

    createActions();
    createMenus();
    createToolBars();
    createStatusBar();
    createDockWindows();
    createTransportControls();
}

void MainWindow::createActions()
{
    connect(ui->actionNew_Project, &QAction::triggered, this, &MainWindow::newProject);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::openFile);
    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::saveFile);
    connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow::saveFileAs);
    connect(ui->actionImport, &QAction::triggered, this, &MainWindow::importFile);
    connect(ui->actionExport, &QAction::triggered, this, &MainWindow::exportFile);
    connect(ui->actionPreferences, &QAction::triggered, this, &MainWindow::openPreferences);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::exitApp);

    connect(ui->actionUndo, &QAction::triggered, this, &MainWindow::undoAction);
    connect(ui->actionRedo, &QAction::triggered, this, &MainWindow::redoAction);
    connect(ui->actionCut, &QAction::triggered, this, &MainWindow::cutAction);
    connect(ui->actionCopy, &QAction::triggered, this, &MainWindow::copyAction);
    connect(ui->actionPaste, &QAction::triggered, this, &MainWindow::pasteAction);
    connect(ui->actionDelete, &QAction::triggered, this, &MainWindow::deleteAction);
    connect(ui->actionSelect_All, &QAction::triggered, this, &MainWindow::selectAll);
    connect(ui->actionFind_Replace, &QAction::triggered, this, &MainWindow::findReplace);

    connect(ui->actionZoom_In, &QAction::triggered, this, &MainWindow::zoomIn);
    connect(ui->actionZoom_Out, &QAction::triggered, this, &MainWindow::zoomOut);
    connect(ui->actionShow_Grid, &QAction::triggered, this, &MainWindow::showGrid);
    connect(ui->actionShow_Tools, &QAction::triggered, this, &MainWindow::showTools);
    connect(ui->actionShow_Mixer, &QAction::triggered, this, &MainWindow::showMixer);
    connect(ui->actionShow_Browser, &QAction::triggered, this, &MainWindow::showBrowser);
    connect(ui->actionShow_Inspector, &QAction::triggered, this, &MainWindow::showInspector);
    connect(ui->actionShow_Transport_Controls, &QAction::triggered, this, &MainWindow::showTransportControls);

    connect(ui->actionAdd_Track, &QAction::triggered, this, &MainWindow::addTrack);
    connect(ui->actionDelete_Track, &QAction::triggered, this, &MainWindow::deleteTrack);
    connect(ui->actionRename_Track, &QAction::triggered, this, &MainWindow::renameTrack);
    connect(ui->actionGroup_Tracks, &QAction::triggered, this, &MainWindow::groupTracks);
    connect(ui->actionUngroup_Tracks, &QAction::triggered, this, &MainWindow::ungroupTracks);
    connect(ui->actionFreeze_Track, &QAction::triggered, this, &MainWindow::freezeTrack);
    connect(ui->actionBounce_Export_Track, &QAction::triggered, this, &MainWindow::bounceExportTrack);

    connect(ui->actionSolo, &QAction::triggered, this, &MainWindow::soloTrack);
    connect(ui->actionMute, &QAction::triggered, this, &MainWindow::muteTrack);
    connect(ui->actionRecord, &QAction::triggered, this, &MainWindow::recordTrack);
    // Define your actions here
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(ui->actionNew_Project);
    fileMenu->addAction(ui->actionOpen);
    fileMenu->addAction(ui->actionSave);
    fileMenu->addAction(ui->actionSave_As);
    fileMenu->addSeparator();
    fileMenu->addAction(ui->actionImport);
    fileMenu->addAction(ui->actionExport);
    fileMenu->addSeparator();
    fileMenu->addAction(ui->actionPreferences);
    fileMenu->addSeparator();
    fileMenu->addAction(ui->actionExit);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(ui->actionUndo);
    editMenu->addAction(ui->actionRedo);
    editMenu->addSeparator();
    editMenu->addAction(ui->actionCut);
    editMenu->addAction(ui->actionCopy);
    editMenu->addAction(ui->actionPaste);
    editMenu->addAction(ui->actionDelete);
    editMenu->addSeparator();
    editMenu->addAction(ui->actionSelect_All);
    editMenu->addSeparator();
    editMenu->addAction(ui->actionFind_Replace);

    viewMenu = menuBar()->addMenu(tr("&View"));
    viewMenu->addAction(ui->actionZoom_In);
    viewMenu->addAction(ui->actionZoom_Out);
    viewMenu->addSeparator();
    viewMenu->addAction(ui->actionShow_Grid);
    viewMenu->addAction(ui->actionShow_Tools);
    viewMenu->addAction(ui->actionShow_Mixer);
    viewMenu->addAction(ui->actionShow_Browser);
    viewMenu->addAction(ui->actionShow_Inspector);
    viewMenu->addAction(ui->actionShow_Transport_Controls);

    projectMenu = menuBar()->addMenu(tr("&Project"));
    projectMenu->addAction(ui->actionAdd_Track);
    projectMenu->addAction(ui->actionDelete_Track);
    projectMenu->addAction(ui->actionRename_Track);
    projectMenu->addSeparator();
    projectMenu->addAction(ui->actionGroup_Tracks);
    projectMenu->addAction(ui->actionUngroup_Tracks);
    projectMenu->addAction(ui->actionFreeze_Track);
    projectMenu->addAction(ui->actionBounce_Export_Track);

    trackMenu = menuBar()->addMenu(tr("&Track"));
    trackMenu->addAction(ui->actionSolo);
    trackMenu->addAction(ui->actionMute);
    trackMenu->addAction(ui->actionRecord);
    // Add your menus here
}

void MainWindow::createToolBars()
{
    // Add your toolbar here
}
void MainWindow::newProject()
{
    // Implement new project logic
}

void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("All Files (*)"));
    if (!fileName.isEmpty()) {
        // Handle file opening logic
        QMessageBox::information(this, tr("File Opened"), tr("File %1 opened successfully.").arg(fileName));
    }
}

void MainWindow::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("All Files (*)"));
    if (!fileName.isEmpty()) {
        // Handle file saving logic
        QMessageBox::information(this, tr("File Saved"), tr("File %1 saved successfully.").arg(fileName));
    }
}

void MainWindow::saveFileAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File As"), "", tr("All Files (*)"));
    if (!fileName.isEmpty()) {
        // Handle file saving logic
        QMessageBox::information(this, tr("File Saved"), tr("File %1 saved successfully.").arg(fileName));
    }
}

void MainWindow::importFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Import File"), "", tr("All Files (*)"));
    if (!fileName.isEmpty()) {
        // Handle file import logic
        QMessageBox::information(this, tr("File Imported"), tr("File %1 imported successfully.").arg(fileName));
    }
}

void MainWindow::exportFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Export File"), "", tr("All Files (*)"));
    if (!fileName.isEmpty()) {
        // Handle file export logic
        QMessageBox::information(this, tr("File Exported"), tr("File %1 exported successfully.").arg(fileName));
    }
}

void MainWindow::openPreferences()
{
    // Implement preferences logic
}

void MainWindow::exitApp()
{
    QApplication::quit();
}

void MainWindow::undoAction()
{
    // Implement undo logic
}

void MainWindow::redoAction()
{
    // Implement redo logic
}

void MainWindow::cutAction()
{
    // Implement cut logic
}

void MainWindow::copyAction()
{
    // Implement copy logic
}

void MainWindow::pasteAction()
{
    // Implement paste logic
}

void MainWindow::deleteAction()
{
    // Implement delete logic
}

void MainWindow::selectAll()
{
    // Implement select all logic
}

void MainWindow::findReplace()
{
    // Implement find and replace logic
}

void MainWindow::zoomIn()
{
    // Implement zoom in logic
}

void MainWindow::zoomOut()
{
    // Implement zoom out logic
}

void MainWindow::showGrid()
{
    // Implement show grid logic
}

void MainWindow::showTools()
{
    // Implement show tools logic
}

void MainWindow::showMixer()
{
    // Implement show mixer logic
}

void MainWindow::showBrowser()
{
    // Implement show browser logic
}

void MainWindow::showInspector()
{
    // Implement show inspector logic
}

void MainWindow::showTransportControls()
{
    // Implement show transport controls logic
}

void MainWindow::addTrack()
{
    // Implement add track logic
}

void MainWindow::deleteTrack()
{
    // Implement delete track logic
}

void MainWindow::renameTrack()
{
    // Implement rename track logic
}

void MainWindow::groupTracks()
{
    // Implement group tracks logic
}

void MainWindow::ungroupTracks()
{
    // Implement ungroup tracks logic
}

void MainWindow::freezeTrack()
{
    // Implement freeze track logic
}

void MainWindow::bounceExportTrack()
{
    // Implement bounce export track logic
}

void MainWindow::soloTrack()
{
    // Implement solo track logic
}

void MainWindow::muteTrack()
{
    // Implement mute track logic
}

void MainWindow::recordTrack()
{
    // Implement record track logic
}


void MainWindow::createStatusBar()
{
    // Add status bar message
}

void MainWindow::createDockWindows()
{
    // Create browser dock
    browserDock = new QDockWidget(tr("Browser"), this);
    browserDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    browserList = new QListWidget(browserDock);
    browserDock->setWidget(browserList);
    addDockWidget(Qt::LeftDockWidgetArea, browserDock);

    // Create playlist dock
    playlistDock = new QDockWidget(tr("Playlist"), this);
    playlistDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    playlist = new QListWidget(playlistDock);
    playlistDock->setWidget(playlist);
    addDockWidget(Qt::LeftDockWidgetArea, playlistDock);

    // Create mixer dock
    mixerDock = new QDockWidget(tr("Mixer"), this);
    mixerDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    mixerList = new QListWidget(mixerDock);
    mixerDock->setWidget(mixerList);
    addDockWidget(Qt::RightDockWidgetArea, mixerDock);
}

void MainWindow::createTransportControls()
{
    // Create transport controls
    transportControls = new QWidget(this);
    QHBoxLayout *transportLayout = new QHBoxLayout(transportControls);

    playButton = new QPushButton(tr("Play"), transportControls);
    stopButton = new QPushButton(tr("Stop"), transportControls);
    recordButton = new QPushButton(tr("Record"), transportControls);

    transportLayout->addWidget(playButton);
    transportLayout->addWidget(stopButton);
    transportLayout->addWidget(recordButton);

    transportControls->setLayout(transportLayout);
    transportControls->setStyleSheet("background-color: #333; color: white;");

    statusBar()->addPermanentWidget(transportControls, 1);
}
