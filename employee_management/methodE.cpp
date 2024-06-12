//contains implementation of methods of employee class

#include "class_e.h"
#include "class_c.h"
#include<iostream>
using namespace std;

//constructor
Employee::Employee(string name,string id,string pos,int s=0)
{
    this->name=name;
    this->id=id;
    position=pos;
    salary=s;
}

//get and set
void Employee::setname(string name){this->name=name;}

void Employee::setid(string id){this->id=id;}

void Employee::setposition(string pos){this->position=pos;}

void Employee::setsalary(int s){this->salary=s;}

string Employee::getname(){return name;}

string Employee::getid(){return id;}

string Employee::getposition(){return position;}

int Employee::getsalary(){return salary;}

//display function
const void Employee::display()
{
    cout<<"Name: "<<getname()<<"    ";
    cout<<"ID: "<<getid()<<"    ";
    cout<<"Position: "<<getposition()<<"    ";
    cout<<"Salary: "<<getsalary()<<"     ";
}

