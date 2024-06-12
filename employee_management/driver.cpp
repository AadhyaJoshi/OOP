
//main driver file content
#include "methodE.cpp"
#include "methodC.cpp"

#include<iostream>

int main()
{
    string cname; //company name
    int noe; //number of employees

    cout<<"Enter name of company: ";
    cin>>cname;
    
    cout<<"Enter number of employees: ";
    cin>>noe;

    //object of class company created
    Company c1(cname,noe);
    cout<<endl;

    int s; //salary
    string name,id,pos; //details of employee

    for(int i=0;i<noe;i++)
    {
        cout<<"Enter name of Employee "<<i+1<<": ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter position in company: ";
        cin>>pos;
        cout<<"Enter salary(in Rs.): ";
        cin>>s;

        //object of class Employee created using parameterised constructor and add employee function
        c1.addemployee(i,name,id,pos,s);
        cout<<endl;
    }
    cout<<endl;

    //displaying list of employees
    c1.displaylist();
    cout<<endl;

    //removing an employee with invalid id
    c1.removeemployee("A1");
    cout<<endl;

    //removing an employee
    c1.removeemployee("2");
    cout<<endl;

    //displaying list of employees after removing
    c1.displaylist();
    cout<<endl;

    return 0;
}