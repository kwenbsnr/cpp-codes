#include <iostream>
#include "Rhombus.h"


Rhombus::Rhombus(double d1, double d2) {
    diagonal1 = d1;
    diagonal2 = d2;
    side = 0;
    height = 0;
}

Rhombus::Rhombus(double s, double h, bool isSideHeight) {
    side = s;
    height = h;
    diagonal1 = 0;
    diagonal2 = 0;
}

double Rhombus::calculateDiagonals() {
    return 0.5 * diagonal1 * diagonal2;
}

double Rhombus::calculateSideAndHeight() {
    return side * height;
}
