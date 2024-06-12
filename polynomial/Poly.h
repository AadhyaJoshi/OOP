//header file containing definition of class

#include<iostream>
using namespace std;

class Poly{

    private:
    double a;
    double b;
    double c;

    public:

    //default constructor
    Poly(){};
    //parameterised constructor
    Poly(double a,double b,double c);

    //operator overloading
    friend Poly operator + (Poly const &q1,Poly const &q2);
    friend Poly operator - (Poly const &q1,Poly const &q2);
    friend Poly operator * (Poly const &q1,Poly const &q2);
    friend ostream &operator << (ostream &output,const Poly &q1);          
    friend istream &operator >> (istream &input,Poly &q1);

};