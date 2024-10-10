#ifndef TRACK_H
#define TRACK_H

#include <QString>

class Track {
public:
    Track(const QString& name = "New Track"); // Constructor
    QString name() const; // Get the track name
    void setName(const QString& newName); // Set the track name
    void freeze(); // Freeze the track
    void solo(); // Solo the track
    void mute(); // Mute the track
    void bounceToFile(const QString& fileName); // Bounce the track to a file
    // Additional track management functions can be added here
    void bounceExport();

private:
    QString m_name; // Track name
    bool m_isFrozen; // Track freeze state
    bool m_isSolo; // Track solo state
    bool m_isMuted; // Track mute state
};

#endif // TRACK_H
