//contains implementation of methods of Company class

#include "class_c.h"

Company::Company(string cname,int size){
    this->companyname=cname;
    this->size=size;
}

void Company::addemployee(int i,string name,string id,string pos,int s=0)
{
    emplist[i].setname(name);
    emplist[i].setid(id);
    emplist[i].setposition(pos);
    emplist[i].setsalary(s);
}

void Company::removeemployee(string idnum)
{
    int flag=0;

    for(int i=0;i<size;i++)
    {
        if(emplist[i].getid()==idnum)
        {
            for(int j=i;j<size-1;j++)
            {emplist[j]=emplist[j+1];}
            flag=1;
            size--;
            cout<<"Employee removed"<<endl;
            break;
        }
    }
    if(flag==0){cout<<"Invalid ID, Employee not removed!"<<endl;}
}

const void Company::displaylist()
{
    for(int i=0;i<size;i++)
    {
        cout<<i+1<<") "<<endl;
        emplist[i].display();
        cout<<endl;
    }
}