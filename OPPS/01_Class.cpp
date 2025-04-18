                                            //CLASS & OBJECTS
/*
#include<iostream>
#include<string>
using namespace std;

class employee                      //creating class of name employee
{
    public:
    string name;
    int id;

    void printdetails()         //creating a new method/function within class employee
    {
        cout<<"Name of 1st employee is "<<this->name<<" and his id is "<<this->id<<endl;
    }
};

int main()
{
    employee e1;                    //CREATING OBJECT "e1" FOR CLASS "employee" 
    e1.name = "milind";
    e1.id = 220303;
    cout<<"Name of 1st employee is "<<e1.name<<" and his id is "<<e1.id<<endl;
    
    e1.printdetails();      //same thing printed using method/function printdetail

    employee e2 = {"abhi kr.",23847};    //can be initialised like this also...
    //e2.name = "abhi";
    //e2.id = 23847;
    e2.printdetails();
}
*/




/* 
#include<iostream>
#include<string>
using namespace std;
class parent
{
    public:
    int l;
    int b;
    void print()
    {
        cout<<endl<<l*b<<endl;
    }
};

class son : public parent
{
    public:
    int h;
    void print()
    {
        cout<<l*b*h;
    }
};
int main()
{
    int l,b,h;
    cin>>l>>b>>h;
    parent p;
    son s;
//Need to Assign values like this if using default constructer
    p.l = l;
    p.b = b;
    s.l = l;
    s.b = b;
    s.h = h;
    
    p.print();
    s.print();
    return 0;
}

 */


                                //POINTER in class
/*
#include<iostream>
#include<string>
using namespace std;
class fruit
{
    public:
    string colour;
    string shape;
};

int main()
{
    
    fruit orange;
    fruit * o;
    o = &orange;
    cin>>orange.colour>>orange.shape;
    cout<<o->colour <<o->shape;
}                         
*/
