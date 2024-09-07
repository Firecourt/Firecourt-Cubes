#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QFile>
#include <QProcess>
#include <QDebug>
#include <QInputDialog>
using namespace std;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {



        ui->setupUi(this);


}

MainWindow::~MainWindow(){
    delete ui;


}

void MainWindow::newProject(){
    // Clear current project settings
    currentProject.clear(); // Assuming currentProject is an object managing your project

    // Optionally, open a dialog for project settings
    QString projectName = QInputDialog::getText(this, "New Project", "Enter project name:");

    if (!projectName.isEmpty()) {
        // Set the new project name and create necessary files or directories
        currentProject.setName(projectName);
        statusBar()->showMessage("New project created: " + projectName);
    }


}
void MainWindow::openFile(){


}
void MainWindow::importFile(){


}
void MainWindow::saveFile(){

}
void MainWindow::saveFileAs(){}

void MainWindow::exportFile(){}
void MainWindow::openPreferences(){}
void MainWindow::exitApp(){}
void MainWindow::undoAction(){}
void MainWindow::redoAction(){}
void MainWindow::cutAction(){}
void MainWindow::copyAction(){}
void MainWindow::pasteAction(){}
void MainWindow::deleteAction(){}
void MainWindow::selectAll(){}
void MainWindow::findReplace(){}
void MainWindow::zoomIn(){}
void MainWindow::zoomOut(){}
void MainWindow::showGrid(){}
void MainWindow::showTools(){}
void MainWindow::showMixer(){}
void MainWindow::showBrowser(){}
void MainWindow::showInspector(){}
void MainWindow::showTransportControls(){}
void MainWindow::addTrack(){}
void MainWindow::deleteTrack(){}
void MainWindow::renameTrack(){}
void MainWindow::groupTracks(){}
void MainWindow::ungroupTracks(){}
void MainWindow::freezeTrack(){}
void MainWindow::bounceExportTrack(){}
void MainWindow::soloTrack(){}
void MainWindow::muteTrack(){}
void MainWindow::recordTrack(){}

