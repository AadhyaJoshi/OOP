// implementation file containing all the methods of class Poly

#include<iostream>
using namespace std;
#include "Poly.h"

Poly::Poly(double a,double b,double c){
    this->a=a;
    this->b=b;
    this->c=c;
}

Poly operator + (Poly const &q1,Poly const &q2){
    Poly q3;
    q3.a=q1.a+q2.a;
    q3.b=q1.b+q2.b;
    q3.c=q1.c+q2.c;

    return q3;
}

Poly operator - (Poly const &q1,Poly const &q2){
    Poly q3;
    q3.a=q1.a-q2.a;
    q3.b=q1.b-q2.b;
    q3.c=q1.c-q2.c;

    return q3;
}

Poly operator * (Poly const &q1,Poly const &q2){

        double new_a = q1.a* q2.a;
        double new_b = q1.a * q2.b + q1.b * q2.a;
        double new_c = q1.a * q2.c + q1.b * q2.b + q1.c * q2.a;
        return Poly(new_a, new_b, new_c);
}

istream &operator>>(istream &input, Poly &poly) 
{
    input >>poly.a>>poly.b>>poly.c;
    return input;            
}

ostream& operator<<(ostream& out, const Poly& poly) {

        if (poly.a != 0) 
        out<<poly.a<<"x^2";

        if (poly.b != 0) 
        {
            if (poly.b < 0) out<<poly.b<<'x';
            else out<<'+'<<poly.b<<'x';
        }

        if (poly.c != 0) 
        {
            if (poly.c < 0) out<<poly.c<<endl;
            else out<<'+'<<poly.c<<endl;
        }

        return out;
    }
