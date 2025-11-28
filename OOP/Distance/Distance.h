#ifndef DISTANCE_H_INCLUDED
#define DISTANCE_H_INCLUDED

class Distance{

    private:
    int feet;
    float inches;

    public:
        //CONSTRUCTORS
    Distance();             //default
    Distance (int, float);  //parameterized
    Distance (Distance &);  //copy

        //DESTRUCTOR
    ~Distance();

        //FUNCTION TO SHOW DISTANCE
    void showDist();

        //PROMPTS USER TO INPUT DISTANCE
    void getDist();

    Distance addDist (Distance);

        //OPERATOR OVERLOADING
    Distance operator + (Distance& d);
    Distance operator - (Distance& d);
    Distance operator ++ ();
            //10-17 ACTIVITY
    bool operator <(Distance& );
    int operator > (Distance& );
    bool operator == (Distance &);

            // 10-22 ACTIVITY
    float getDistance();
    float convToMeter();
};


#endif // DISTANCE_H_INCLUDED
