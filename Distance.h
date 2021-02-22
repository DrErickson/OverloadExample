//
// Created by we7289 on 2/22/2021.
//

#ifndef DISTANCE_H
#define DISTANCE_H

#include <iostream>

using namespace std;

class Distance {
public:

    Distance();

    Distance(int feet, int inch);

    Distance operator+(Distance& otherDistance);
    //friend Distance operator+(Distance&, Distance&);  // This is another way to overload.

    //ostream& operator<<(ostream& outStm);  // Overload output stream
    //int operator[](int index);           // We can even overload []
    //int operator[](string parameter);    // We can even overload []

    // Getters/Setters
    int getFeet() const;
    int getInch() const;
    void setFeet(int feet);
    void setInch(int inch);

private:
    int feet, inch;

};

#endif
