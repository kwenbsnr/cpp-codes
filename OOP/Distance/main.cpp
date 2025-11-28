#include <iostream>
#include "Distance.h"
using namespace std;

int main()
{
    /*
    Distance livingRoom (11,6.25);
    Distance diningRoom;
    diningRoom.getDist();
    cout << "\nLiving Room = ";
    livingRoom.showDist();
    cout << "\nDining Room = ";
    diningRoom.showDist();

    Distance houseWidth;

    houseWidth = livingRoom.addDist (diningRoom);
    cout << "\nHouse Width: ";
    houseWidth.showDist();
    */


    /*
    Distance d1 (5,11);
    Distance d2 (3, 10);
    Distance d3;

    d3 = d1-d2;
    d3.showDist ();
    */


    /*
    Distance d1 (1, 23);
    ++d1;
    d1.showDist();
    */


    /*
    Distance d1 (5,7);
    Distance d2 (5,);
    if (d1 == d2){
    cout <<"yes"<<endl;
     } else {
     cout << "no " <<endl;
     }
    */


    /*
    Distance Distance;
    Distance.addDist (Distance);
    Distance diningRoom (2,10.8);
    */


    Distance distance1, distance2;

    cout << "Enter first Distance:\n";
    distance1.getDistance();

    cout << "\nEnter second Distance:\n";
    distance2.getDistance();

    cout << "\nDistance 1: ";
    distance1.showDist() ;
    distance1.convToMeter();
    cout << "\nDistance 2: ";
    distance2.showDist();
    distance2.convToMeter();

    return 0;
}
