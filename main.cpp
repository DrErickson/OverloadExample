#include <iostream>
#include "Distance.h"
using namespace std;

int main()
{
    // Declaring and Initializing first object
    Distance d1(5, 9);

    // Declaring and Initializing second object
    Distance d2(10, 1);

    // Declaring third object
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;

    // Display the result
    cout << "\nTotal Feet & Inches: " << d3.getFeet() << "'" << d3.getInch();
    return 0;
}
