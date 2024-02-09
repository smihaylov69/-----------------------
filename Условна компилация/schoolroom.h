#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom {
    int room_number;
    struct Person current_occupants[50];
};
#endif