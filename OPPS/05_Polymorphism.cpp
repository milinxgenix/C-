                                            //POLYMORPHISM

// Ability of an object or method to take different forms.
// From those diff forms, the form to be used will be decided by COMPILE-TIME or RUN-TIME polymorphism.



                                    //COMPILE-TIME POLYMORPHISM


                                    // 1. FUNCTION OVERLOADING

// multiple functions of same name will be called based on the type of argument or number of argument passed 

//EXAMPLE 1:-
/*
#include<iostream>
#include<string>
using namespace std;
class shape
{
    public:
    //int n;     //no of sides 
    //int r;     //radius
    //int l;     //length
    //int b;     //breath
    //int h;     //heigth
    //float B;   //base

    shape(int l, int b)
    {
        cout<<"it's a RECTANGLE";
    }


    shape(float B, int h)
    {
        cout<<"it's a TRIANGLE";
    }


    shape(int r)
    {
        cout<<"it's a CIRCLE";
    }


    float area(int r)
    {
        return 3.14*r*r;                 //will be used when we specify area as int or float instead of void
        //cout<<"Area of Circle is: "<<3.14*r*r<<endl;
    }

    int area(int l, int b)
    {
        return l*b;
        //cout<<"Area of Rectagle is: "<<l*b<<endl;
    }

    void area(float B, int h)
    {
        //return B*h*(1/2);
        cout<<"Area of triangle is: "<<0.5*B*h<<endl;
    }
};

int main()
{
    shape r(2,3);
    cout<<endl;
    cout<<r.area(2,3);
    cout<<endl<<endl;
    
    shape t(float(2.33), 5);            //2.33 has to be mentioned as floating pt number or else it will get confused with constructor of rect and will show ambiguity
    cout<<endl;
    t.area(float(2.5),3);
    cout<<endl<<endl;
    
    shape c(4);
    cout<<endl;
    cout<<c.area(4);
}
*/



//EXAMPLE 2:-
/*
#include<iostream>
#include<string>
using namespace std;
class sum
{
    public:
    void add(int a, int b)
    {
        cout<<a+b;
    }

    void add(int a, int b, int c)
    {
        cout<<a+b+c;
    }

    void add(float m, float n)
    {
        float added = m+n;
        cout<<added;
    }

    void add(int a, float b)
    {
        cout<<a+b;
    }
};

int main()
{
    sum s;
    s.add(2,3);
    cout<<endl;
    s.add(4,5,6);
    cout<<endl;
    s.add(float(2.5),float(3.8));            //have to mention as float or it will show ambiguity
    cout<<endl;
    s.add(6,float(3.4));
}
*/




                                    // FUNCTION OVERLOADING IN INHERITANCE CLASS
/* 
#include<iostream>
#include<string>
using namespace std;
class parent
{
    public:
    int l;
    int b;
    void print(int l, int b)
    {
        cout<<l*b<<" by parent"<<endl;
    }
};

class son : public parent
{
    public:
    int h;
    using parent::print;                    // Inheriting base class contructor into child class
    
    void print(int l, int b, int h)        // Own constructor of child class
    {
        cout<<l*b*h<<" by child"<<endl;
    }
};

int main()
{
    int l,b,h;
    cin>>l>>b>>h;
    parent p;
    son s;
    p.print(l,b);
    s.print(l,b);               //Inherited constructor of parent class will work for child class object 's'
    s.print(l,b,h);
    return 0;
}
 */




                                    // 2. OPERATOR OVERLOADING

//   '+' operator -- 2+3 = 5   here it is used to addup as integer datatypes are operated under '+' operator.
//   '+' operator -- "Milind" + "Kumar" -- here it is used to concatinate as string data types are operated under '+' operator.

/* 
#include<iostream>
#include<string>
using namespace std;
int main()
{
 int a = 5;
 int b = 6;
 string c = "Milind ";
 string d;
 cout<<"what's ur surname"<<endl;
 cin>>d;

cout<<endl;
cout<<a+b<<endl; 
cout<<c+d<<endl; 
//cout<<a+d<<endl;                    this will throw error as string + integer not possible.
}
*/




                                        //COMPLEX NUMBER PROBLEM USING OPERATOR OVERLOADING
/*                                  
#include<iostream>
#include<string>
using namespace std;
class complex
{
    public:
    int real;
    int imag;

    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    
//creating a opeartor overloading function:-
    complex operator + (complex &c)        //here defining work of + operator by making a function in which only 2 argument can be passed at a time one is operator itself and second argument will be the object of class complex
    {
        complex ans(0,0);
        ans.real = real + c.real;        //only one object can be used at a time, will be added to zero & return ans which will be added to 2nd object in 2nd time and again ans will be returned
        ans.imag = imag + c.imag;
        return ans;                      //multiple object will be added one by one and ans will be returned
    } 

};


int main()
{
    int r1,i1,r2,i2;
    cin>>r1>>i1>>r2>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);
    complex c3(8,9);                           //not taking it from user
    complex c4 = c1 + c2 + c3;                 //here we have defined the work of '+' operator above so it  will function accordingly.
    cout<<c4.real<<"+"<<c4.imag<<"i"<<endl;
}
*/





                                    //RUN-TIME POLYMORPHISM (resolved at run time)

// 1. Function Over-Riding        -- same name funtion in both base & inherited class
/*
#include<iostream>
#include<string>
using namespace std;
class father
{
    public:
    virtual void print()
    {
        cout<<"parent class"<<endl;
    }
    void showcase()
    {
        cout<<"i'm papa"<<endl;
    }
};

class child : public father
{
    public:
    void print()
    {
        cout<<"child class"<<endl;
    }
    void showcase()
    {
        cout<<"i'm beta"<<endl;
    }
};

int main()
{
    father* p;          //pointer variable of father class
    child c;            // obj of child class
    p = &c;             // at runtime we changed the definition of pointer variable p from father class to child class this is know as "overriding of obj variable at runtime"
    p->print();         //virtual keyword used so it will get over rided and will print "child class"
    p->showcase();      //virtual keyword not used so it won't be over rided and show "papa"
    cout<<endl<<endl;
    c.print();
    c.showcase();

    //we can over ride pointer variable from parent class to child class not from child to parent
    // function over riding is done using virtual keyword by the below stated way:-
    // pehle father class ka variable banaye h firr child class ka obj aur firr parent class ke pointer mei child class ke obj ka address daal kr over ride kr diye h...
    // overrided print fn using virtual keyword so it will reflect child class characters
    // Didn't override showcase so it will reflect parent class characters 
}
*/


// function overriding :- 
// -- function name & parameter both should be same for parent & child class (INHERITANCE IS MUST )
// -- memory efficient & faster execution time...

// function over loading :-
// -- INHERITANCE not required, can be done within single class also by making multiple functions of same name but diff parameters if inheritance is done then no need to use virtual keyword  example below...
// -- slower & not memory efficient
