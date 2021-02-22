//
// Created by we7289 on 2/22/2021.
//

#include "Distance.h"

Distance::Distance() {
    feet = 0;
    inch = 0;
}

Distance::Distance(int feet, int inch) {
    this->feet = feet;
    this->inch = inch;
}

int Distance::getFeet() const {
    return feet;
}

void Distance::setFeet(int feet) {
    this->feet = feet;
}

int Distance::getInch() const {
    return inch;
}

void Distance::setInch(int inch) {
    this->inch = inch%12;
    this->feet = feet + inch/12;
}

Distance Distance::operator+(Distance &otherDistance) {

    return Distance();
}

int Distance::operator[](string parameter) {
    if (parameter == "feet") {
        return feet;
    }
    return 0;
}
