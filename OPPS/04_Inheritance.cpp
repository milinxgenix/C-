                                     //INHERITANCE
/*
#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    string name;
    int age;

    void printdetailsemployee()
    {
        cout << "the name of employee is " << this->name << " his age is " << this->age << endl;
    }
};

class manager : public employee                     //creating subclass and inheriting the properties of public modifiers of the class "employee"
{
public:
    int salary;

    void printdetailsmanager()
    {
        cout << "the name of manager is " << this->name << " his age is " << this->age << " and salary is " << this->salary << endl;
    }
};

int main()
{
    employee e1;
    e1.name = "milind";
    e1.age = 19;

    manager e2;
    e2.name = "sattu supadi";
    e2.age = 48;
    e2.salary = 500;

    e1.printdetailsemployee();
    e2.printdetailsemployee();        //object of derived class has inherited the methods of base class
    e2.printdetailsmanager();
}
*/




                                                    // INHERITENCE TYPES

//1. SINGLE INHERITANCE :- GRANDFATHER - FATHER
//2. MULTI-LEVEL INHERITANCE :- GRANDFATHER - FATHER - CHILD 
//3. MULTIPLE INHERITANCE :- FATHER & MOTHER --- BROTHER
//4. HEIRARCHIAL INHERITANCE :- FATHER -- CHILD & BROTHER 
//5. HYBRID INHERITANCE :- BROTHER class is mixture of MULTI-LEVEL, MULTIPLE & HEIRARCHIAL INHERITANCE

/*
//                   Calling constructor of base classes using inheritance (constructor used as calling function)
#include<iostream>
#include<string>
using namespace std;
class grandfather
{
    public:
    grandfather()
    {
        cout<<"I'm DADA 👴🏻"<<endl; 
    }
};

class father : public grandfather
{
    public:
    father()
    {
        cout<<"I'm PAPA 🧔🏻‍♂️"<<endl;
    }
};

class mother
{
    public:
    mother()
    {
        cout<<"MAA toh MAA hoti h 💁🏻‍♀️"<<endl;
    }
};

class child : public father
{
    public:
    child()
    {
        cout<<"I'm BETA 🙋🏻‍♂️"<<endl;
    }
};


class brother : public mother, public father         //firstly mother's property will be inherited then father's property
{
    public:
    brother()
    {
        cout<<"Appun akkha mumbai ka BHAIII hai 😼"<<endl;
    }
};

int main()
{
    grandfather gf;
    cout<<endl<<endl;
    father f;
    cout<<endl<<endl;
    child s;                  
    cout<<endl<<endl;
    mother m;
    cout<<endl<<endl;
    brother b;                //his own constructor will be called at last after calling constructors of base classes
}
*/




                                                    //DIAMOND PROBLEM
                                        //(AMBIGUITY is resolved using virtual keyword)
                                     //virtual keyword dono base mei lgega sirf ek mei nhi 
/*
#include<iostream>
using namespace std;
class animal
{
    public:
    string colour;

    animal()
    {
        cout<<"Ranbir nhi asli wala ANIMAL hai mai 😾"<<endl;
    }
};

class tiger : virtual public animal             //if virtual keyword won't used then it will show ambiguity
{
    public:
    int age;
    tiger()
    {
        cout<<"Indra the TIGER 🐅"<<endl;
    }
};

class lion : virtual public animal              //if virtual keyword won't used then it will show ambiguity
{
    public:
    int no;
    lion()
    {
        cout<<"Aaj SHER pdhega 🦁"<<endl;
    }
};

class liger : public tiger, public lion             // Inheriting both tiger & lion so amibuity could be created  whether to call animal constructor from Tiger or Lion Inheritance
{
    public:
    int leg;
    liger()
    {
        cout<<"Mai mila-jula hu, POTTER ⚡️"<<endl;
    }
};

int main()
{
    liger l; 
    l.colour = "Black";     // PROPERTY(DATATYPE) inherited from animal class 
    cout<<l.colour<<endl;
    l.age = 55;             // PROPERTY(DATATYPE) inherited from tiger class 
    cout<<l.age<<endl;
    l.no = 5;               // PROPERTY(DATATYPE) inherited from lion class 
    cout<<l.no<<endl;
    l.leg = 4;              // PROPERTY(DATATYPE) of his own class liger
    cout<<l.leg<<endl;
}
*/




                                //Inheriting constructor of base class to sub class
/*                   
#include<iostream>
#include<string>
using namespace std;
class rectangle
{
 protected:                  //can't put this private as we have to inherit it in subclass "square"
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

class square : public rectangle
{
    public:
    square(int a, int c) : rectangle(a,c)           //inheriting constructor of base class to derive class
    {
        length = a;
        breath = c;
    }
    void areaofsquare()
    {
        cout<<length*length<<endl;
    }

    void perimeterofsquare()
    {
        cout<<4*length<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"enter lengh & breath:"<<endl;
    cin>>a>>b;
    square s(a,b);
    s.areaofrect();
    s.perimeterofrect();
    s.areaofsquare();
    s.perimeterofsquare();

}
*/
 
//NOTE :-                          
// Constructor cannot be inherited but a derived class can call the constructor of the base class. 





                                            //FRIEND FUNCTION
// pvt datamembers can be accessed only using frnd funct from outside the class & can be access from that same class by creating public function within the class...
// friend function is fuction outside the class or member fuction of diff class                                                         
/*
#include<iostream>
using namespace std;
class a
{
    int x;
    
    friend void get(a &obj);            //passing any object 'obj' of class 'a' as argument in fn
    friend void print(a &o);            //passing any object of class 'a' as argument in fn
};

void get(a &obj)
{
    cin>>obj.x;
}

void print(a &o)    //can write print(a &obj) also
{
    cout<<o.x;
}

int main()
{
    a mili;
    get(mili);          //passed an obj of class 'a' as argument
    print(mili);
    return 0;
}
*/

