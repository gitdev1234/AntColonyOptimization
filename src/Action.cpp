/**
    Action.cpp
    Purpose: Implements Class Action
    @author Wall.Of.Death
    @version 0.1
    @since 2016-03-05
*/

#include "../include/Action.h"

Action::Action(){
    //ctor
}

Action::~Action(){
    //dtor
}

Action::Action(const Action& other){
    //copy ctor
}

Action& Action::operator=(const Action& rhs){
    if (this == &rhs)  {
        return *this; // handle self assignment
    }
    return *this;     // assignment operator
}
