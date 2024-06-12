//main driver code

#include<iostream>
#include "Poly.cpp"

int main(){

    double a1,b1,c1;
    //taking input using parameterised constructors
    cout<<"For polynomials of form ax^2+bx+c, enter a,b,c for 2 polymnomials:"<<endl;

    //taking input using parameterised constructor
    cin>>a1>>b1>>c1;
    Poly q1(a1,b1,c1);
    cout<<endl;
    cout<<"Polynomial 1: ";
    cout<<q1<<endl;

    //taking input using overloaded operator >>
    Poly q2;
    cin>>q2;
    cout<<endl;
    cout<<"Polynomial 2: ";
    cout<<q2<<endl;
    
    //overloaded operations
    Poly c3=q1+q2;
    Poly c4=q1-q2;
    Poly c5=q1*q2;

    cout<<"q1+q2= ";
    cout<<c3<<endl;

    cout<<"q1-q2= ";
    cout<<c4<<endl;

    cout<<"q1*q2= ";
    cout<<c5<<endl;

    return 0;
}