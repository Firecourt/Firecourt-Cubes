#include "mainwindow.h"
#include "layout.h"
#include "terminaldialog.h"
#include <QMenuBar>
#include <QStatusBar>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QApplication>

// Constructor for MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // Set up the layout
    Layout *layout = new Layout(this);
    setCentralWidget(layout);

    // Connect signals from Layout to slots in MainWindow
    connect(layout, &Layout::fileOpenRequested, this, &MainWindow::openFile);
    connect(layout, &Layout::projectOpenRequested, this, &MainWindow::openProject);
    connect(layout, &Layout::fileSaveRequested, this, &MainWindow::saveFile);
    connect(layout, &Layout::fileSaveAsRequested, this, &MainWindow::saveFileAs);
    connect(layout, &Layout::exitRequested, this, &MainWindow::exitApplication);
    connect(layout, &Layout::editTrackRequested, this, &MainWindow::editTrack);
    connect(layout, &Layout::deleteTrackRequested, this, &MainWindow::deleteTrack);
    connect(layout, &Layout::zoomInRequested, this, &MainWindow::zoomIn);
    connect(layout, &Layout::zoomOutRequested, this, &MainWindow::zoomOut);
    connect(layout, &Layout::setHorizontalViewRequested, this, &MainWindow::setHorizontalView);
    connect(layout, &Layout::setVerticalViewRequested, this, &MainWindow::setVerticalView);
    connect(layout, &Layout::showTerminalRequested, this, &MainWindow::showTerminal);
    connect(layout, &Layout::closeRenetRequested, this, &MainWindow::closeRenet);
}
MainWindow::~MainWindow() {
    // Cleanup code, if necessary
}


// Open file slot
void MainWindow::openFile() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("All Files (*.*)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            // Process the file content here
            file.close();
            statusBar()->showMessage(tr("Opened file: %1").arg(fileName));
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Cannot open file: %1").arg(file.errorString()));
        }
    }
}

// Open project slot
void MainWindow::openProject() {
    QString projectDir = QFileDialog::getExistingDirectory(this, tr("Open Project Directory"));
    if (!projectDir.isEmpty()) {
        // Load project resources here
        statusBar()->showMessage(tr("Opened project: %1").arg(projectDir));
    }
}

// Save file slot
void MainWindow::saveFile() {
    // Logic to save the current file
    statusBar()->showMessage(tr("File saved."));
}

// Save file as slot
void MainWindow::saveFileAs() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File As"), "", tr("All Files (*.*)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            // Write content to the file here
            file.close();
            statusBar()->showMessage(tr("Saved file: %1").arg(fileName));
        } else {
            QMessageBox::warning(this, tr("Error"), tr("Cannot save file: %1").arg(file.errorString()));
        }
    }
}

// Exit application slot
void MainWindow::exitApplication() {
    QApplication::quit();
}

// Edit track slot
void MainWindow::editTrack() {
    // Logic to edit the selected track
    statusBar()->showMessage(tr("Edit track functionality to be implemented."));
}

// Delete track slot
void MainWindow::deleteTrack() {
    // Logic to delete the selected track
    statusBar()->showMessage(tr("Delete track functionality to be implemented."));
}

// Zoom in slot
void MainWindow::zoomIn() {
    // Logic for zooming in
    statusBar()->showMessage(tr("Zoomed in."));
}

// Zoom out slot
void MainWindow::zoomOut() {
    // Logic for zooming out
    statusBar()->showMessage(tr("Zoomed out."));
}

// Set horizontal view slot
void MainWindow::setHorizontalView() {
    // Logic for setting horizontal view
    statusBar()->showMessage(tr("Set horizontal view."));
}

// Set vertical view slot
void MainWindow::setVerticalView() {
    // Logic for setting vertical view
    statusBar()->showMessage(tr("Set vertical view."));
}

// Show terminal slot
void MainWindow::showTerminal() {
    // Logic for showing terminal
    statusBar()->showMessage(tr("Showing terminal."));
}

// Close renet slot
void MainWindow::closeRenet() {
    // Logic to close Renet
    statusBar()->showMessage(tr("Closed Renet."));
}

// Save action triggered
void MainWindow::on_actionSave_triggered() {
    saveFile(); // Call to save the current file
}

// Save As action triggered
void MainWindow::on_actionSave_As_triggered() {
    saveFileAs(); // Call to save the current file with a new name
}

// Import action triggered
void MainWindow::on_actionImport_triggered() {
    // Logic for importing a file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Import File"), "", tr("All Files (*.*)"));
    if (!fileName.isEmpty()) {
        // Implement your import logic here
        statusBar()->showMessage(tr("Imported file: %1").arg(fileName));
    }
}

// Export action triggered
void MainWindow::on_actionExport_triggered() {
    // Logic for exporting a file
    QString fileName = QFileDialog::getSaveFileName(this, tr("Export File"), "", tr("All Files (*.*)"));
    if (!fileName.isEmpty()) {
        // Implement your export logic here
        statusBar()->showMessage(tr("Exported file: %1").arg(fileName));
    }
}

// Preferences action triggered
void MainWindow::on_actionPreferences_triggered() {
    // Open preferences dialog
    QMessageBox::information(this, tr("Preferences"), tr("Preferences functionality to be implemented."));
}

// Exit action triggered
void MainWindow::on_actionExit_triggered() {
    exitApplication(); // Call to exit the application
}

// Add Track action triggered
void MainWindow::on_actionAdd_Track_triggered() {
    // Logic to add a new track
    statusBar()->showMessage(tr("Add Track functionality to be implemented."));
}

// Delete Track action triggered
void MainWindow::on_actionDelete_Track_triggered() {
    deleteTrack(); // Call to delete the selected track
}

// Rename Track action triggered
void MainWindow::on_actionRename_Track_triggered() {
    // Logic to rename the selected track
    statusBar()->showMessage(tr("Rename Track functionality to be implemented."));
}

// Group Tracks action triggered
void MainWindow::on_actionGroup_Tracks_triggered() {
    // Logic to group selected tracks
    statusBar()->showMessage(tr("Group Tracks functionality to be implemented."));
}

// Ungroup Tracks action triggered
void MainWindow::on_actionUngroup_Tracks_triggered() {
    // Logic to ungroup selected tracks
    statusBar()->showMessage(tr("Ungroup Tracks functionality to be implemented."));
}

// Freeze Track action triggered
void MainWindow::on_actionFreeze_Track_triggered() {
    // Logic to freeze the selected track
    statusBar()->showMessage(tr("Freeze Track functionality to be implemented."));
}

// Bounce Export Track action triggered
void MainWindow::on_actionBounce_Export_Track_triggered() {
    // Logic for bouncing/exporting the selected track
    statusBar()->showMessage(tr("Bounce Export Track functionality to be implemented."));
}

// Solo action triggered
void MainWindow::on_actionSolo_triggered() {
    // Logic to solo the selected track
    statusBar()->showMessage(tr("Solo functionality to be implemented."));
}

// Mute action triggered
void MainWindow::on_actionMute_triggered() {
    // Logic to mute the selected track
    statusBar()->showMessage(tr("Mute functionality to be implemented."));
}

// Record action triggered
void MainWindow::on_actionRecord_triggered() {
    startRecording(); // Call to start recording audio
}

// Audio Settings action triggered
void MainWindow::on_actionAudio_Settings_triggered() {
    // Logic to open audio settings
    QMessageBox::information(this, tr("Audio Settings"), tr("Audio Settings functionality to be implemented."));
}

// MIDI Settings action triggered
void MainWindow::on_actionMIDI_Settings_triggered() {
    // Logic to open MIDI settings
    QMessageBox::information(this, tr("MIDI Settings"), tr("MIDI Settings functionality to be implemented."));
}

// New Track action triggered
void MainWindow::on_actionNew_Track_triggered() {
    // Logic to create a new track
    statusBar()->showMessage(tr("New Track functionality to be implemented."));
}

// Select Track action triggered
void MainWindow::on_actionSelect_track_triggered() {
    // Logic to select a specific track
    statusBar()->showMessage(tr("Select Track functionality to be implemented."));
}

// Select All Tracks action triggered
void MainWindow::on_actionSelect_all_tracks_triggered() {
    selectAllTracks(); // Call to select all tracks
}

// Edit Track action triggered
void MainWindow::on_actionEdit_track_triggered() {
 // Call to edit the currently selected track
}

// Delete Track action triggered
void MainWindow::on_actionDelete_track_triggered() {
    deleteTrack(); // Call to delete the selected track
}

// Horizontal View action triggered
void MainWindow::on_actionHorizontal_triggered() {
    setHorizontalView(); // Call to set horizontal view
}

// Vertical View action triggered
void MainWindow::on_actionVertical_triggered() {
    setVerticalView(); // Call to set vertical view
}
void showTerminal(){
    TerminalDialog terminalDialog;

}



// Terminal action triggered
void MainWindow::on_actionTerminal_triggered() {
    showTerminal(); // Call to show the terminal
}

// Mixer action triggered
void MainWindow::on_actionMixer_triggered() {
    // Logic to show the mixer
    QMessageBox::information(this, tr("Mixer"), tr("Mixer functionality to be implemented."));
}

// EQ action triggered
void MainWindow::on_actionEQ_triggered() {
    // Logic to show the EQ
    QMessageBox::information(this, tr("EQ"), tr("EQ functionality to be implemented."));
}

// Instruments action triggered
void MainWindow::on_actionInstruments_triggered() {
    // Logic to show instruments
    QMessageBox::information(this, tr("Instruments"), tr("Instruments functionality to be implemented."));
}

// Effects action triggered
void MainWindow::on_actionEffects_triggered() {
    // Logic to show effects
    QMessageBox::information(this, tr("Effects"), tr("Effects functionality to be implemented."));
}

// Open action triggered (alternative)
void MainWindow::on_actionOpen_2_triggered() {
    openFile(); // Call to open a file
}

// Dialogbox action triggered
void MainWindow::on_actionDialogbox_triggered() {
    // Logic to show a dialog box
    QMessageBox::information(this, tr("Dialog Box"), tr("Dialog box functionality to be implemented."));
}

// Message Box action triggered
void MainWindow::on_actionMessage_Box_triggered() {
    QMessageBox::information(this, tr("Message Box"), tr("Message box functionality to be implemented."));
}

// Close action triggered
void MainWindow::on_actionClose_triggered() {
    // Logic to close the application or a specific window
    QMessageBox::information(this, tr("Close"), tr("Close functionality to be implemented."));
}

// Tutor action triggered
void MainWindow::on_actionTutor_triggered() {
    // Logic to show a tutorial
    QMessageBox::information(this, tr("Tutor"), tr("Tutor functionality to be implemented."));
}

// Documentation action triggered
void MainWindow::on_actionDocumentation_triggered() {
    // Logic to show documentation
    QMessageBox::information(this, tr("Documentation"), tr("Documentation functionality to be implemented."));
}

// What Is action triggered
void MainWindow::on_actionWhat_is_triggered() {
    // Logic to show information about the application
    QMessageBox::information(this, tr("What Is"), tr("What Is functionality to be implemented."));
}

// Compile action triggered
void MainWindow::on_actionCompile_triggered() {
    compileProject(); // Call to compile the project
}

// Empty Project action triggered
void MainWindow::on_actionEmpty_Project_triggered() {
    // Logic to create an empty project
    QMessageBox::information(this, tr("Empty Project"), tr("Empty Project functionality to be implemented."));
}

// Undo action triggered
void MainWindow::on_actionUndo_triggered() {
    // Logic for undoing the last action
    statusBar()->showMessage(tr("Undo functionality to be implemented."));
}

// Redo action triggered
void MainWindow::on_actionRedo_triggered() {
    // Logic for redoing the last undone action
    statusBar()->showMessage(tr("Redo functionality to be implemented."));
}

// New Project action triggered
void MainWindow::on_actionNew_Project_triggered() {
    // Logic to create a new project
    statusBar()->showMessage(tr("New Project functionality to be implemented."));
}

// Text changed slot
void MainWindow::onTextChanged() {
    // Logic to handle text changes, e.g., in a text editor
    statusBar()->showMessage(tr("Text changed."));
}
void MainWindow::startRecording() {
    // Implement recording logic
}

void MainWindow::selectAllTracks() {
    // Implement track selection logic
}

void MainWindow::compileProject() {
    // Implement project compilation logic
}

