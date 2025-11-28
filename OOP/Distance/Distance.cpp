#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance (){
    feet = 5;
    inches = 8;

}

Distance:: Distance (int ft, float in) {
    feet = ft;
    inches = in;
}

Distance :: Distance (Distance & p) {
    feet = p.feet;
    inches = p.inches;
}

Distance :: ~Distance () {}

void Distance::showDist (){
    cout<< feet << "\'-" << inches << '\"';
}

void Distance::getDist (){
    cout <<" Enter Distance: ";
    cin >> feet;
    cin >> inches;
}

//Distance houseWidth(){}

Distance Distance::addDist (Distance other) {
    Distance temp;              //temporary object (Distance)

    temp.inches = inches + other.inches ;
    temp.feet = feet + other.feet;

    while (temp.inches >= 12.0) {
        temp.feet += 1;          //temp.feet = temp.feet+1;
        temp.inches -= 12.0;     //temp.inches = temp.inches-12.0;
    }
     return temp ;
}

Distance Distance::operator+ (Distance& d) {
    Distance temp;

    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;

    // Convert inches to feet while >= 12
    while (temp.inches >= 12.0) {
        temp.feet += 1;          // Convert every 12 inches to an additional foot    //(temp.inches / 12);
        temp.inches -=  12.0;    // Remove 12 inches to reflect the conversion       // Remainder inches
    }
    return temp;
}

Distance Distance:: operator- (Distance& d){
    Distance temp;
    // LINE 65 represents the current Distance obj (the obj from w/ch we are subtracting).
    float inches1 = feet * 12 + inches;
    float inches2 = d.feet * 12 +d.inches;

    float result = inches1 - inches2;

    temp.feet = result/12;
    temp.inches = result - (temp.feet* 12);

    return temp;
}

Distance Distance:: operator ++ (){
    inches+=1;
    feet+=1;

    while ( inches >= 12 ){
        feet++;
        inches -=12;
    }
}

int Distance::operator>(Distance& d) {
   // float d1 = feet * 12 + inches;       this algo converts feet to inches
   // float d2= d.feet * 12 + d.inches;

    if (feet > d.feet){
        return 1;
    } else if (feet==d.feet && inches >d.inches){
        return 1;
    }else {
        return 0;
    }
}

bool Distance::operator==(Distance& d) {
    if (feet==d.feet && inches ==d.inches)
    {
        return true;
    }else {
        return false;
    }
}

float Distance::convToMeter (){
    // this algo first converts FEET TO INCHES, then INCHES TO METERS.
    double inchResult = feet * 12 + inches;
    double meters = inchResult * 0.0254;
    cout << " (" << meters << " meters)";
}

float Distance:: getDistance (){
    cout << "Enter Feet: ";
    cin >> feet;
    cout << "Enter Inches: ";
    cin >> inches;
}
