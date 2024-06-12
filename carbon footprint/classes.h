//header file containing definition of classes

#include<iostream>
using namespace std;

class CarbonFootprint{
    public:
    virtual void getcarbonfootprint()=0;
};

//for a building, carbonfootprint= CO2 emmission at (construcution + demolition + operation) in metric tons
class Building: public CarbonFootprint{
    private:
    string name_of_building;
    int nof; //number of floors
    float co2_construction;
    float co2_demolition;
    float co2_operation;

    public:
    Building(string n,float c,float d,float o);
    void getcarbonfootprint();   
};


//car carbon footprint= fuel consumed(in gallons) * 4.6 (metric ton CO2 per gallon of petrol)
class Car: public CarbonFootprint{
    private:
    string name_of_car;
    float mileage;
    float eff; //efficieny= distance per gallon of petrol

    public:
    Car(string n,float m,float eff);
    void getcarbonfootprint();
};


//bicycle carbon footprint= fuel consumed(in gallons) * 4.6 (metric ton CO2 per gallon of petrol)
class Bicycle: public CarbonFootprint{
    private:
    string name_of_bicycle;
    float mileage;
    float eff; //efficieny= distance per gallon of petrol

    public:
    Bicycle(string n,float m,float eff);
    void getcarbonfootprint();
};

