#ifndef GROUP_H
#define GROUP_H

#include <QList>
#include "track.h"  // Make sure to include your Track class header
#include "track.h"

class Group {
public:
    Group();

    void addTrack(Track* track);
    void removeTrack(Track* track);
    QList<Track*> getTracks() const { return tracks; }

private:
    QList<Track*> tracks;  // List of tracks in this group
};

#endif // GROUP_H
