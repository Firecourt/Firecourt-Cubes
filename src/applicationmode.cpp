#include "applicationmode.h"

ApplicationMode::ApplicationMode(QObject *parent)
    : QObject(parent), currentMode(Musician) // Default to Musician mode
{
}

void ApplicationMode::setApplicationMode(Mode mode) {
    if (currentMode != mode) {
        currentMode = mode;
        emit applicationModeChanged(currentMode); // Emit signal when mode changes
    }
}

ApplicationMode::Mode ApplicationMode::currentApplicationMode() const {
    return currentMode;
}
