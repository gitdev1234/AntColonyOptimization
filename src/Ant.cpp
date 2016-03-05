#include "../include/Ant.h"

Ant::Ant() {
    //ctor
}

Ant::~Ant() {
    //dtor
}

Ant::Ant(const Ant& other_) {
    //copy ctor
}

Ant& Ant::operator=(const Ant& rhs_) {
    if (this == &rhs_) {
        return *this; // handle self assignment
    }

    return *this; //assignment operator
}
