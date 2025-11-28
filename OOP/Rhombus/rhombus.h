#ifndef RHOMBUS_H_INCLUDED
#define RHOMBUS_H_INCLUDED

class Rhombus {

public:
    double diagonal1;
    double diagonal2;
    double side;
    double height;


    Rhombus(double d1, double d2);
    Rhombus(double s, double h, bool isSideHeight);

    double calculateDiagonals();
    double calculateSideAndHeight();
};

#endif // RHOMBUS_H_INCLUDED
