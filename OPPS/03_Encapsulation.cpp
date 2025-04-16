                                // ENCAPSULATION(ADT - ABSTRACT DATA HIDING)
/*
#include<iostream>
using namespace std;
class num
{
   int i;                           // i is private Data as by default it's private

   public:                          //using constructor-function(mixed) to access private data 
    void set(int n)
    {
        i = n;
    }

    int get()
    {
        return i;
    }
};

int main()
{
    num obj1;
    obj1.set(3);                                   //without taking input from user
    cout<<"The Result is "<<obj1.get()<<endl;

    num obj2;
    int a;
    cout<<"enter the value of obj 2: "<<endl;
    cin>>a;                                      //taking input of constructor-function from user
    obj2.set(a); 
    cout<<"The Result is "<<obj2.get()<<endl;

}
*/



                            //GETTING THE INPUT OF CLASS FROM USER
/*
#include<iostream>
using namespace std;
class num
{
    public:
    int i;                  //if u take these data types as private then have to use SET() method like in above example
    int j;

                // void get()             // if using void
                // {
                //    cout<< i+j;
                // }

int get()
{
    return i+j;
}
};

int main()
{
    num p;
    cin>>p.i>>p.j;
    cout<<p.get();
    // p.get();        //if using void

}
*/




                        //making constructor for private datas (using constructor to access private data types & taking input from user)
/*
#include<iostream>
#include<string>
using namespace std;
class rectangle
{
 private:    
 int length;
 int breath;
 
 public:
 rectangle(int l, int b)
 {
    length = l;
    breath = b;
 }

 void areaofrect()
 {
    cout<<length*breath<<endl;
 }

 void perimeterofrect()
 {
    cout<<(length+breath)*2<<endl;
 }
};

int main()
{
    int a,b;
    cout<<"enter lengh & breath:"<<endl;
    cin>>a>>b;
    rectangle r(a,b);
    r.areaofrect();
    r.perimeterofrect();
}
*/




                                      //ACCESS MODIFIERS
/*                          
#include<iostream>
#include<string>
using namespace std;

class employee
{
//PUBLIC ACCESS MODIFIER
    public:
    string name;
    int id;
 

//CONSTRUCTOR
    employee(string n, int id_no, int code)
    {
        this->name = n;
        this->id = id_no;
        this->password = code;
    }

    void printdetails()         // method/function to print public details
    {
        cout<<"Name of 1st employee is "<<this->name<<" and his id is "<<this->id<<endl;
    }

    void getpasscode()       // method/function for private password
    {
        cout<<"The secret password is "<<this->password<<endl;
    }


//PRIVATE ACCESS MODIFIER
    private:
    int password;

};

int main()
{
    employee e1("milind constructor",220303,456642);
    //cout<<"password is "<<e1.password<<endl;          //PVT datatype can't be accessed like this
    //e1.name = "milind";
    //e1.id = 220303;
    e1.printdetails();
    e1.getpasscode();                   //pvt datatype can be accessed only using a public method
}
*/                           




                                //ACCESS MODIFIERS IN INHERITENCE 
/*
#include<iostream>
using namespace std;
class parent
{
    public:            //can be access from parent class, child class, own class & other classes or outside the class
    string name;               // so it can be access from outside by just calling from obj of parent class in int main()

    protected:         //can be access from parent class, child class, own class (using get & set functions)
    int age;

    private:           // not acccessible or can be access using friend function only
    int num;
};

class child : public parent      //inheriting publicly   (child class is iheriting the parent class publicly)
{
    //will inherit "name" publicly       so it can be access from outside by just calling from obj of child class in int main()
    //will inherit "age" protected       so it can be access only from inside the class or parent class or sub class of child class
    //won't be able to access "numÆ"     
};

class child : protected parent       //inheriting protected
{
    //will inherit "name" protected       so it can be access only from inside the class or parent class or sub class of child class
    //will inherit "age" protected         so it can be access only from inside the class or parent class or sub class of child class
    //won't be able to access "num"
};

class child : private parent         //inheriting privately
{
    //will inherit "name" privately         won't be accessible after child class 
    //will inherit "age" privately          won't be accessible after child class
    //won't be able to access "num"
};
*/


