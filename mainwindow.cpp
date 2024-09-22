#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QFile>
#include<QFileDialog>
#include <QProcess>
#include <QDebug>
#include <QInputDialog>
#include <QDir>
#include <QKeySequence>
#include <QShortcut>

#include <string>
using namespace std;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {



        ui->setupUi(this);



}

MainWindow::~MainWindow(){
    delete ui;


}

void MainWindow::newProject(){
    // Clear current project settings


}
void MainWindow::openFile(){
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Open Audio Files"), "", tr("Audio Files (*.mp3 *wav *.ogg *.flac *.acc)"));
    if (!files.isEmpty()){
        foreach (const QString &filePath, files) {
            qDebug() << "File selected: " <<filePath;


        }
    }
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

