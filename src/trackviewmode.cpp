#include "trackviewmode.h"

// Constructor
TrackViewMode::TrackViewMode(QObject *parent)
    : QObject(parent), currentMode(Horizontal) { // Initialize to Horizontal by default
}

// Method to set the view mode
void TrackViewMode::setViewMode(Mode mode) {
    if (currentMode != mode) { // Only emit the signal if the mode is changing
        currentMode = mode;
        emit viewModeChanged(currentMode); // Emit signal to notify of the change
    }
}

// Method to get the current view mode
TrackViewMode::Mode TrackViewMode::currentViewMode() const {
    return currentMode;
}
