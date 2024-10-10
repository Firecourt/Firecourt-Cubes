#include "project.h"

// Constructor
Project::Project(QObject *parent) : QObject(parent) {}

// Copy constructor
Project::Project(const Project& other) : QObject(other.parent()) {
    // Deep copy the tracks
    for (Track* track : other.tracks) {
        // Assuming Track has a copy constructor
        tracks.append(new Track(*track));
    }
    // Deep copy the groups
    for (Group* group : other.groups) {
        // Assuming Group has a copy constructor
        groups.append(new Group(*group));
    }
}

// Move constructor
Project::Project(Project&& other) noexcept : QObject(other.parent()), tracks(std::move(other.tracks)), groups(std::move(other.groups)) {
    // Nullify other pointers to prevent double deletion
    other.tracks.clear();
    other.groups.clear();
}

// Copy assignment operator
Project& Project::operator=(const Project& other) {
    if (this != &other) {
        // Clean up current tracks and groups
        qDeleteAll(tracks); // Delete existing Track pointers
        qDeleteAll(groups); // Delete existing Group pointers
        tracks.clear();
        groups.clear();

        // Deep copy the tracks
        for (Track* track : other.tracks) {
            tracks.append(new Track(*track)); // Assuming Track has a copy constructor
        }
        // Deep copy the groups
        for (Group* group : other.groups) {
            groups.append(new Group(*group)); // Assuming Group has a copy constructor
        }
    }
    return *this;
}

// Move assignment operator
Project& Project::operator=(Project&& other) noexcept {
    if (this != &other) {
        // Clean up current tracks and groups
        qDeleteAll(tracks); // Delete existing Track pointers
        qDeleteAll(groups); // Delete existing Group pointers
        tracks.clear();
        groups.clear();

        // Transfer ownership of resources
        tracks = std::move(other.tracks);
        groups = std::move(other.groups);

        // Nullify other pointers to prevent double deletion
        other.tracks.clear();
        other.groups.clear();
    }
    return *this;
}

// Destructor to clean up dynamic memory
Project::~Project() {
    qDeleteAll(tracks); // Delete Track pointers
    qDeleteAll(groups); // Delete Group pointers
}
void Project::groupTracks(const QList<Track*>& tracks) {
    // Implement the logic to group the provided tracks
}

void Project::ungroupTracks(Group* group) {
    // Implement the logic to ungroup the provided group
}
