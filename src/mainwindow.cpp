#include "../include/mainwindow.h"
#include "appearancesettingsdialog.h"
#include "customdialog.h"
#include "effectsdialog.h"
#include "findreplacedialog.h"
#include "instrumentsdialog.h"
#include "project.h"
#include "settingsdialog.h"
#include "templatesdialog.h"
#include "terminaldialog.h"
#include "tutordialog.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QInputDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QMenuBar>
#include <QToolBar>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include <QListView>
#include "track.h"
#include "layout.h"

// MainWindow constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , applicationMode(Normal) // Set the initial application mode
{
    // Set the Layout instance as the central widget of the MainWindow
    Layout *layout = new Layout(this);
    setCentralWidget(layout);

    // Setup connections for the signals and slots
    setupConnections();
}

// MainWindow destructor
MainWindow::~MainWindow() {
    // No need to delete ui pointer since we are managing widgets directly
}

// Method to set application mode
void MainWindow::setApplicationMode(ApplicationMode mode) {
    applicationMode = mode;

    // Update UI or behavior based on mode
    switch (applicationMode) {
    case Normal:
        // Configure UI for normal mode
        break;
    case Editing:
        // Configure UI for editing mode
        break;
    case Mixing:
        // Configure UI for mixing mode
        break;
    case Recording:
        // Configure UI for recording mode
        break;
    }
}

// Method to set up connections
void MainWindow::setupConnections() {
    // Connect menu actions to corresponding slots
    connect(textEdit, &QTextEdit::textChanged, this, &MainWindow::onTextChanged);
}

// Method to open a file
void MainWindow::openFile() {
    QString fileName = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath(), "All Files (*.*);;Text Files (*.txt)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Could not open file for reading.");
            return;
        }
        QTextStream stream(&file);
        QString content = stream.readAll();
        textEdit->setPlainText(content);
        file.close();
        QMessageBox::information(this, "File Loaded", "File loaded successfully.");

        // Open Dolphin with the file path
        QProcess::startDetached("dolphin", QStringList() << fileName);
    }
}

void MainWindow::on_actionSave_triggered() {
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", QDir::homePath(), "All Files (*.*);;Text Files (*.txt)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Could not open file for writing.");
            return;
        }
        QTextStream stream(&file);
        stream << textEdit->toPlainText();
        file.close();
        QMessageBox::information(this, "File Saved", "File saved successfully.");
    }
}

void MainWindow::on_actionSave_As_triggered() {
    on_actionSave_triggered(); // Reuse save function
}

void MainWindow::on_actionImport_triggered() {
    openFile(); // Call the openFile function for import
}

void MainWindow::on_actionExport_triggered() {
    QString fileName = QFileDialog::getSaveFileName(this, "Export File", QDir::homePath(), "All Files (*.*);;Text Files (*.txt)");
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::warning(this, "Error", "Could not open file for writing.");
            return;
        }
        QTextStream stream(&file);
        stream << "Exported content goes here."; // Replace with actual data
        file.close();
        QMessageBox::information(this, "File Exported", "File exported successfully.");
    }
}

void MainWindow::on_actionPreferences_triggered() {
    SettingsDialog preferencesDialog(this);
    preferencesDialog.exec();
}

void MainWindow::on_actionExit_triggered() {
    close();
}

// Implement remaining functions as before...

// Define each function
void MainWindow::on_actionNew_Project_triggered() {
    // Your implementation to create a new project
}

void MainWindow::on_actionUndo_triggered() {
    // Your implementation for undo functionality
}

void MainWindow::on_actionRedo_triggered() {
    // Your implementation for redo functionality
}

void MainWindow::on_actionAdd_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionDelete_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionRename_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionGroup_Tracks_triggered() {
    // Your implementation
}

void MainWindow::on_actionUngroup_Tracks_triggered() {
    // Your implementation
}

void MainWindow::on_actionFreeze_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionBounce_Export_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionSolo_triggered() {
    // Your implementation
}

void MainWindow::on_actionMute_triggered() {
    // Your implementation
}

void MainWindow::on_actionRecord_triggered() {
    // Your implementation
}

void MainWindow::on_actionAudio_Settings_triggered() {
    // Your implementation
}

void MainWindow::on_actionMIDI_Settings_triggered() {
    // Your implementation
}

void MainWindow::on_actionNew_Track_triggered() {
    // Your implementation
}

void MainWindow::on_actionSelect_track_triggered() {
    // Your implementation
}

void MainWindow::onTextChanged() {
    // Handle text change event
}

void MainWindow::on_actionEdit_track_triggered() {
    // Code to edit a track
    Track* track = getSelectedTrack();
    if (track) {
        editTrack(track);
    }
}

void MainWindow::on_actionDelete_track_triggered() {
    // Code to delete a track
    Track* track = getSelectedTrack();
    if (track) {
        // Logic to delete the track
    }
}

void MainWindow::on_actionZoom_In_triggered() {
    // Code to zoom in the view
    zoomIn();
}

void MainWindow::on_actionZoom_Out_triggered() {
    // Code to zoom out the view
    zoomOut();
}

void MainWindow::on_actionHorizontal_triggered() {
    // Code to set view to horizontal
    setViewMode(TrackViewMode::Horizontal);
}

void MainWindow::on_actionVertical_triggered() {
    // Code to set view to vertical
    setViewMode(TrackViewMode::Vertical);
}

void MainWindow::on_actionTerminal_triggered() {
    // Code to open the terminal view
    // Add logic for the terminal view
}

void MainWindow::on_actionMixer_triggered() {
    // Code to open the mixer view
    // Add logic for the mixer view
}

void MainWindow::on_actionEQ_triggered() {
    // Code to open the EQ view
    // Add logic for the EQ view
}

void MainWindow::on_actionInstruments_triggered() {
    // Code to open the instruments view
    // Add logic for the instruments view
}

void MainWindow::on_actionEffects_triggered() {
    // Code to open the effects view
    // Add logic for the effects view
}

void MainWindow::on_actionOpen_2_triggered() {
    // Code for the Open action
    openFile();
}

void MainWindow::on_actionDialogbox_triggered() {
    // Code to open a dialog box
    // Example logic for a dialog box
}

void MainWindow::on_actionMessage_Box_triggered() {
    // Code to open a message box
    // Example logic for a message box
}

void MainWindow::on_actionClose_triggered() {
    // Code to close the application or window
    close();
}

void MainWindow::on_actionTutor_triggered() {
    // Code to open the tutor/help section
    // Add logic for opening the tutor/help section
}

void MainWindow::on_actionDocumentation_triggered() {
    // Code to open the documentation
    // Add logic for opening documentation
}

void MainWindow::on_actionWhat_is_triggered() {
    // Code for the "What is" action
    // Add logic for this action
}

void MainWindow::on_actionCompile_triggered() {
    // Code to compile the project
    compileProject();
}

void MainWindow::on_actionEmpty_Project_triggered() {
    // Code to create a new empty project
    // Add logic for creating a new project
}

void MainWindow::setViewMode(TrackViewMode::Mode mode) {
    // Set the view mode based on the parameter
    // Add logic for changing the view mode
}

void MainWindow::compileProject() {
    // Code to compile the current project
    // Add logic for compiling the project
}

Track* MainWindow::getSelectedTrack() {
    // Logic to get the selected track
    return nullptr; // Replace with actual logic
}

void MainWindow::editTrack(Track* track) {
    // Logic to edit the selected track
}
