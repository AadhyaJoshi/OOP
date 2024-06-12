//implemnetation of methods of different classes

#include "classes.h"
#include<iostream>
using namespace std;

Building::Building(string n,float c,float d,float o)
{
    name_of_building=n;
    (c>0) ? co2_construction= c : 0;
    (d>0) ? co2_demolition= d : 0;
    (o>0) ? co2_operation= o : 0;
}

void Building::getcarbonfootprint()
{
    float total=co2_construction + co2_demolition + co2_operation;
    cout<<"Carbon footprint of "<<name_of_building<<" building is: "<<total<<" metric tons"<<endl;
}

Car::Car(string n,float m,float eff)
{
    name_of_car=n;
    (m>0) ? mileage= m: 0;
    (eff>0) ? this->eff= eff : 0;
}
   
void Car::getcarbonfootprint()
{
    float total= (mileage/eff)*(4.6);
    cout<<"Carbon footprint of "<<name_of_car<<" car is: "<<total<<" metric tons"<<endl;
}

Bicycle::Bicycle(string n,float m,float eff)
{
    name_of_bicycle=n;
    (m>0) ? mileage= m: 0;
    (eff>0) ? this->eff= eff : 0;
}
   
void Bicycle::getcarbonfootprint()
{
    float total= (mileage/eff)*(4.6);
    cout<<"Carbon footprint of "<<name_of_bicycle<<" bicycle is: "<<total<<" metric tons"<<endl;
}
