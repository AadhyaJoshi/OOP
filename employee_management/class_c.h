//DEFINES CLASS COMPANY

#include "class_e.h"
#ifndef class_c_H
#define class_c_H

class Company{
    private:
    int size;
    string companyname;
    Employee emplist[100];

    public:
    Company(string cname,int size);
    void addemployee(int i,string name,string id,string pos,int s);
    void removeemployee(string id);
    void const displaylist();

};

#endif