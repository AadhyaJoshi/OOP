//DEFINES CLASS EMPLOYEE

#ifndef class_e_H
#define class_e_H

#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    string id;
    string position;
    int salary;

    public:

    Employee(){};
    //parameterised constructor
    Employee(string name,string id,string pos,int s);

    //set and get functions 
    void setname(string name);
    void setid(string id);
    void setposition(string pos);
    void setsalary(int s);

    string getname();
    string getid();
    string getposition();
    int getsalary();

    //display function
    void const display(); 
};

#endif