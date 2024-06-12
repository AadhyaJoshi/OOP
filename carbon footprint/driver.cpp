//main driver code which demonstrates the implementation of calculation of carbon footprint

#include<iostream>
#include<vector>
#include "classes.cpp"
using namespace std;

int main()
{
    vector<CarbonFootprint*> arr;

    Building b1("Vincenza",45,22,1.68);
    Car c1("Audi",450,20);
    Bicycle bi1("Bullet",956,35);
    Building b2("Taksh",23,11,4.73);
    Car c2("Mercedes Benz",3400,65);
    Bicycle bi2("Honda 560",1543,50);

    arr.push_back(&b1);
    arr.push_back(&c1);
    arr.push_back(&bi1);
    arr.push_back(&b2);
    arr.push_back(&c2);
    arr.push_back(&bi2);

    for (auto i = arr.begin(); i != arr.end(); i++)
    (*i)->getcarbonfootprint();

    return 0;
}
