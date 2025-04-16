                                        //STATIC VARIABLE
                //(can be use to track no. of objects created of a particular class)
/*
#include<iostream>
#include<string>
using namespace std;
class employee
{
    string name;
    int salary;
    static int count;             //making static variable "count" to get number of employees

    public:
    void get()
    {
        cin>>name>>salary;
        count++;
    }

    void display()
    {
        cout<<"Employee No.: "<<count<<endl;
        cout<<name<<"'s salary is: "<<salary<<endl;
    }
};

int employee :: count;             // by default, value of static variable is always 0.
//int employee :: count = 100;     // to start counting from 100 like this u can initialized initial value to ur static variable

int main()
{
    employee e1,e2,e3;
    
    e1.get();
    e1.display();
    
    e2.get();
    e2.display();
    
    e3.get();
    e3.display();

    return 0;
}
*/
// static variable use krne se no of employee ka pta chl rha h aur nth employee ka v but agar static ki jgh normally count bnate to wo sb object ko employee no 1 hi show krta...                                         




                                        //STATIC MEMBER FUNCTION
/*                                       
// Static member fn is used to access all static variables separetly (they can access only static variables)...
#include<iostream>
#include<string>
using namespace std;
class employee
{
    string name;
    int salary;
    static int count;             //making static variable "count" to get number of employees

    public:
    void get()
    {
        cin>>name>>salary;
        count++;
    }

    void display()
    {
        //cout<<"Employee No.: "<<count<<endl;            NOW COUNT WILL BE SHOWN USING STATIC MEMBER FUNCTION
        cout<<name<<"'s salary is: "<<salary<<endl;
    }

                                     //Creating STATIC FUNTION TO GET COUNT
    static void getcount()
    {
        cout<<"Employee No is: "<<count<<endl;
    }
};

int employee :: count;             // by default value of static variable is always 0.
//int employee :: count = 100;     //to start counting from 100 like this u can initialized initial value to ur static variable

int main()
{
    employee e1,e2,e3;
    
    e1.get();
    employee :: getcount();     //calling static variable to give the nth employee serial no.
    e1.display();
    
    e2.get();
    employee :: getcount();     //static variable can be called only using class name not by object name
    e2.display();
    
    e3.get();
    employee :: getcount();    //it has to be called every time for every obj in same manner
    e3.display();

    return 0;
}
*/




