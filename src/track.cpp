#include "track.h"
#include <QDebug> // For debugging purposes, can be removed later

// Constructor
Track::Track(const QString& name)
    : m_name(name), m_isFrozen(false), m_isSolo(false), m_isMuted(false) {}

// Get the track name
QString Track::name() const {
    return m_name;
}

// Set the track name
void Track::setName(const QString& newName) {
    m_name = newName;
}

// Freeze the track
void Track::freeze() {
    m_isFrozen = true;
    qDebug() << "Track frozen: " << m_name;
}

// Solo the track
void Track::solo() {
    m_isSolo = true;
    m_isMuted = false; // Unmute if soloing
    qDebug() << "Track soloed: " << m_name;
}

// Mute the track
void Track::mute() {
    m_isMuted = true;
    qDebug() << "Track muted: " << m_name;
}

// Bounce the track to a file
void Track::bounceToFile(const QString& fileName) {
    // Implement bouncing functionality (audio processing, saving to file)
    qDebug() << "Bouncing track: " << m_name << " to file: " << fileName;
    // Add actual audio processing code here
}
void Track::bounceExport() {
    // Implement the logic for bouncing and exporting the track
    // This can involve rendering the audio to a file
}
