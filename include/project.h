#ifndef PROJECT_H
#define PROJECT_H

#include <QList>
#include <QObject>
#include "track.h"  // Include your Track class header
#include "group.h"  // Include your Group class header

class Project : public QObject {
    Q_OBJECT

public:
    Project(QObject *parent = nullptr);

    // Copy constructor
    Project(const Project& other);

    // Move constructor
    Project(Project&& other) noexcept;

    // Copy assignment operator
    Project& operator=(const Project& other);

    // Move assignment operator
    Project& operator=(Project&& other) noexcept;

    void addTrack(Track* track);
    void deleteTrack(Track* track);
    void groupTracks(const QList<Track*>& tracks);
    void ungroupTracks(Group* group);

    QList<Track*> getTracks() const { return tracks; }
    QList<Group*> getGroups() const { return groups; }

    ~Project(); // Destructor to clean up dynamic memory

private:
    QList<Track*> tracks;   // List of tracks in the project
    QList<Group*> groups;   // List of groups of tracks
};

#endif // PROJECT_H
