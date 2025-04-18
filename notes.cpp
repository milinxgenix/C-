//                              'C++ & OOPS' NOTES BY KUMAR MILIND
                                                   
                           
                           
                           //DOUBTS
/*
1.  CALLING FUNCTION IN FUNCTION :- LINE 102
2.  MAKING POINTER FOR OBJ AS WE MAKE NORMALLY IN C - LINE 836(POINTER IN CLASS)  
3.  operator overloading mei real kya h, c1 kya h, c2 kya h, ek baar mei ek hi argument kyu paas ho rha h, c1,c2 mei se kaun pas ho rha h as argument (collg wala vid - 1:12:00)...
4.  can friend func be created in inherited class.
5.  can friend funtion be inherited from base class to child class ----- ans is NO
6.  Creating a vector from a vector
*/ 




                        //RUNNNING 1ST PROGRAM 
/*                           
#include<iostream>
using namespace std;
int main() 
{
    cout<<"Hello Milind!";
    return 0;
}
*/


                        //Print Sentence in Next Line 
/*
#include<iostream>
using namespace std;
int main() 
{
    cout<<"Hello Milind!" <<endl <<" let's start learning C++" <<endl;           //endl adds a nextline 
    return 0;
}
*/



                            //camelCase Notation :- for using shortcuts
/*
#include <iostream>
using namespace std;
int main()
{
    int marksInmaths = 90;
    cout << mim;
}
*/


                            //taking word as a input
/*
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<< "enter your name: ";
    cin>>name;
    cout<<name;
}
*/



                            //taking sentence as a input
/*
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<< "enter your name: ";
    getline(cin,name);
    cout<<name;
}
*/


                        // DIVISION:- (TAKING MULTIPLE USER INPUTS IN SAME LINE & TYPE CASTING)
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;                                               //TAKING 2 USER INPUTS IN SAME LINE 
    cout<<"a divided by b is: "<<endl<<(float)a/b;          //TYPECASTING
}
*/



                            //STRING PRACTICE
/*
#include<iostream>
using namespace std;
int main()
{
    string name = "Kumar Milind";
    cout<<"And The name is "<<name<<endl;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the desired name:"<<endl;
    cin>>name;
    cout<<"And the name is "<<name<<endl;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    string fullname;
    cout<<"Enter your full name:"<<endl;
    getline(cin,fullname);
    cout<<"The full name is:"<<endl<<fullname;
}
*/


                                        //STRINGS & THEIR FUNCTIONS
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name ="Milind";
    cout<<"Name is: "<<name<<endl;
    cout<<"The length of string is: "<<name.length()<<endl<<endl;

    cout<<name.substr(0,3)<<endl;
    cout<<name.substr(2,5)<<endl<<endl;

    cout<<name.substr(3,155)<<endl;
    cout<<name.substr(3,3)<<endl<<endl;

    cout<<name.substr(4,4)<<endl;
    cout<<name.substr(4,5)<<endl<<endl;

    cout<<name.substr(5,5)<<endl;
    cout<<name.substr(5,1)<<endl;
    
}
*/



                                               //ARRAY
/*
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"enter the num of elements in array:"<<endl;
    cin>>i;
    int arr[i];
    for(int j=0;j<i;j++)
    {
        cout<<"enter the element at index "<<j<<" :"<<endl;
        cin>>arr[j];
    }
    cout<<endl<<"{";
    for(int j=0;j<i;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"}"<<endl;
    for(int j=0;j<i;j++)
    {
        cout<<endl<<"Element at index "<<j<<" is: "<<arr[j];
    }
}
*/

// for (int i=0; i<3; i++)         to take user input as arr elements
// {
//     cin>>arr[i];
// }



                                              //2D ARRAY
/*
#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]=
                    {
                        {1,2,3},
                        {5,6,7}
                    };
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"element at index: "<<i<<","<<j<<" is: "<<arr[i][j]<<endl;
        }
    }
}
*/



                        // RECALLING FUNCTIONS IN FUNCTIONS
/*
#include<iostream>
using namespace std;

int sum(int f, int g)
{
    return f + g;
}

int avg(int f, int g)
{
    return sum(f, g) / 2;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << sum(a, b) << endl;
    cout << "Average: " << avg(a, b) << endl;
}
*/



                                //Passing Array as an argument in a Function
/*
#include<iostream>
#include<string>
using namespace std;

void print_Array(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<", ";
        }
}

int main()
{
    int arr[5] = {1,28,4,5,6};
    //print_Array(arr, sizeof(arr));        //will include some garbage values also
    
    int n = 5;
    print_Array(arr, n);
    return 0;
}
*/




                                        //Pointers (NEW & DELETE keywords)
/*
#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    int* ptr;
    ptr = &a;

    cout<<&a<<endl;
    cout<<(ptr)<<endl;
    cout<<a<<endl;
    cout<<*(ptr)<<endl;

//changing the value of 'a' using pointer    
    *ptr = 9;                                       
    cout<<"after changing the value a = "<<a<<endl;
    cout<<"end of this program"<<endl<<endl;



//"NEW" keyword

int *p = new int(40);                   //created a int dynamically and associated a pointer P to it, without naming any variable to that int.
cout<<*p<<endl;
cout<<"end of this program"<<endl<<endl;



// creating an array dynamically

int *arr = new int[3];                  // [] will be used instead of ()      like we used to do "int arr[i];" for creating array 
*arr = 1;
//arr[0] = 1;                           //same as above
*(arr+1) = 2;                           //we can assign value like this also
arr[2] = 3;

 
//delete[] arr;                         //delete operator  when we use it all values inputed will be deleted & print 0 0 0 as array 
 
*/


//delete[] arr;         //delete operator will not work here 


                                                                                               
                                                
                                                
                                        //OOPS                                                        
                            
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



                                        //CONSTRUCTORS
/*
#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
    string name;
    int id;

//constructor
    employee(string n, int id_no)
    {
        this->name = n;
        this->id = id_no;
    }

    void printdetails()
    {
        cout<<"Name of 1st employee is "<<this->name<<" and his id is "<<this->id<<endl;
    }

//Destroyer
    ~employee()
    {
        cout<<"destroyed";
    }
};

int main()
{
    employee e1("milind constructor",220303);
    //e1.name = "milind";                       //won't work
    //e1.id = 220303;                          //won't work
    e1.printdetails();
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
    e1.getpasscode();                   //PVT datatype can be accessed only using a public method
}
*/                           



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





                                            // OOPS
                                    // classes and objects

/*
#include<iostream>
#include<string>
using namespace std;

class fruit
{
    public:
    int size;
    string shape;
    string colour;

    fruit(int s, string sh, string c)          //constructer
    {
        this -> size = s;
        this -> shape = sh;
        this -> colour = c;
    }

    void printdetails()
    {
        cout<<"the size of fruit is "<<this->size<<" shape is "<<this-> shape<< " & colour is "<<this ->colour <<endl;
    }
};


int main()
{
    //fruit apple,banana,orange;        
    
    fruit apple(10,"small","red");        //using constructer
    fruit banana(15,"big","black");
    fruit orange(13,"medium","green");

    // apple.size = 10;
    // banana.size = 15;
    // orange.size = 13;

    // apple.shape = "small";
    // banana.shape = "big";
    // orange.shape = "medium";

    // apple.colour = "red";
    // banana.colour = "black";   
    // orange.colour = "green";

    apple.printdetails();
    banana.printdetails();
    orange.printdetails();
    cout<<endl;

    //cout<<"The of size apple is "<<"'"<<apple.size<<"'"<<endl;
    //cout<<"The of shape apple is "<<"'"<<apple.shape<<"'"<<endl;
    //cout<<"The of colour apple is "<<"'"<<apple.colour<<"'"<<endl;
    //cout<<endl;

    
    //fruit *watermelon  = new fruit();           //making object using pointer 
    // watermelon -> size = 20;                   //here watermelon is not an object but a pointer to an object
    // watermelon -> shape = "veryBig";           //to assing values to data variable of obj via pointer we need to use "->" like watermelon->shape
    // watermelon -> colour = "redgreen";         // watermelon is a dynamically assigned pointer to some obj to put values to data variables we can't do like *(watermelon).colour   instead do like watermelon->colour

    fruit *watermelon  = new fruit(20,"very Big","red-green");         //making object using pointer after constructer is used
    
    watermelon->printdetails();
    cout<<endl;
    //cout<<"The of size watermelon is "<<"'"<<watermelon->size<<"'"<<endl;
    //cout<<"The of shape watermelon is "<<"'"<<watermelon->shape<<"'"<<endl;
    //cout<<"The of colour watermelon is "<<"'"<<watermelon->colour<<"'"<<endl;
}
*/

//NOTE :-
// If using a pointer of an obj then replace every dots(.) with ->   
// like use apple.color if apple is object
// use apple->color if apple is pointer to some dynamically created object




                                        //CONTRUCTERS & DESTRUCTORS

// example 1 - how to call default vs paramatized constructor & how to take user input for paramatized constructor
/*
#include<iostream>
#include<string>
using namespace std;
class book
{
    protected:
    string name;
    string author;
    int price;
    public:
    book()                                             // 0 or NIL value need to assigned
    {
        name = "NIL";                                  // for String we should put 'NIL'
        author = "NIL";
        price = 0;                                     // for Int, Float etc we will assing '0'

        cout<<this->name<<endl<<this->author<<endl<<this->price<<endl;
    }

    book(string n, string a, int p)
    {
        name = n;
        author = a;
        price = p;
        cout<<this->name<<endl<<this->author<<endl<<this->price<<endl;
    }
};
int main()
{
    book b1;

    string n,a;
    int p;
    cin>>n>>a>>p;
    book b2(n,a,p); 

    return 0;
}
*/




//example 2
/*
#include<iostream>
#include<string>
using namespace std;

class rectangle
{
    public:
    int length;
    int breath;

    rectangle()                // DEFAULT CONSTRUCTER (no arguments given)
    {
        length = 0;
        breath = 0;
    }

    rectangle(int l, int b)      // PARAMETERISED CONSTRUCTER 
    {
        length = l;
        breath = b;
    }

    rectangle(rectangle& r)      //copy constructer
    {
         length = r.length;
         breath = r.breath;
    }

    // int area(rectangle &r)
    // {
    //     return r.length*r.breath;
    // }

    ~rectangle()                       // destroyer/destructor
    {
        cout<<"destroyed"<<endl;
    }
};

int main()
{
    rectangle* r1 = new rectangle();                //creating a pointer 'r1' to dynamic object of reactangle class
    cout<<r1->length<<" "<<r1->breath<<endl;
    delete r1;                                      //  deleting r1 using pointer method

    rectangle r2(2,4);
    cout<<r2.length<<" "<<r2.breath<<endl;
    //cout<<r2.area<<endl;

    rectangle r3 = r2;
    cout<<r3.length<<" "<<r3.breath<<endl;


//taking input from user for parameterized constructor()
    int l,b;                            
    cout<<"enter value of length & breath for r4:"<<endl;
    cin>>l>>b;
    rectangle r4(l,b);
    cout<<"length of r4 is "<<r4.length<<" and breath is "<<r4.breath<<endl<<endl;

    int a,d;
    cout<<"enter value of length & breath for r5:"<<endl;
    cin>>a>>d;
    rectangle r5(a,d);
    cout<<"length of r5 is "<<r5.length<<" and breath is "<<r5.breath<<endl<<endl;

    cout<<"Here comes the destroyer...."<<endl;
}
*/


                    
                            //GETTING THE INPUT OF CLASS FROM USER
/*
#include<iostream>
using namespace std;
class num
{
    public:
    int i;
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




                                        //CONSTRUCTER - WORKING AS A CALLING FUNCTION WITH NO ARGUMENT
/*
#include<iostream>
using namespace std;

class num
{
    public:
    int i;
    
    num()             //plain constructor
    {
    cout<<"milind";
    }
};

int main()
{
    num n;
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

class child : public parent      //inheriting publicly   (child class is iheriting the parent class publicly)ß
{
    //will inherit "name" publicly       so it can be access from outside by just calling from obj of child class in int main()
    //will inherit "age" protected       so it can be access only from inside the class or parent class or sub class of child class
    //won't be able to access "num"      
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



                                        //Operator Overloading 
/*
#include<iostream>
#include<string>
using namespace std;
class complex
{
    int real;
    int imag;

    public:
    void get(int r, int i)
    {
        real = r;
        imag = i;
    }

    complex operator + (complex &obj)               //Operator overloading 
    {
        complex ans;
        ans.real = real + obj.real;
        ans.imag = imag + obj.imag;
        return ans;
    }
};



int main()
{
    int a,b,c,d;
    complex object1(int a, int b);
    complex object2(int c, int d);
    cin>>a>>b>>c>>d;
    complex object3;
    object3 = object1 + object2;                                                //here '+' won't work as ordinary addition operator but we do the work we assigned in above method as operation overriding 
    cout<<object3.real<<" + "<<object3.imag<<"j";
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
    
    void print(int l, int b, int h)         // Own constructor of child class
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









                                        // I/O files :- (fstreambase, ifstream, ofstream) classes
                                        // ofstream:- to write into the file
                                        // ifstream:- to read contents of files 

//writting a txt file
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    string st3 = "hello milind! this is a sample text file";
    ofstream out("sampleFile.txt");                  //created an object of name 'out', of ofstream class
    out<<st3;

    out.close();        //using this we can read and write together in same code i.e in same int main()...
}
*/


//reading a txt file 
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st;
    string st2;
    ifstream in("sampleFile.txt");      //reading the file with help of 'in' object of ifstream class
    //in>>st;                           //will extract single word from file 
    //cout<<st<<endl;
    getline(in,st2);                    //extracting the content of file to st2
    cout<<st2<<endl;

    in.close();                 //using this we can read and write together in same code i.e in same int main()...
}
*/


//taking user input to write in file
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    string st3;
    getline(cin, st3);
    ofstream likh("sampleFile.txt");        //likh is name of object in above examples obj were named as out and in...  
    likh<<st3;

    likh.close();
}
*/



//method-2
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    ofstream out;                       //created an obj "out" of ofstream class
    out.open("sampleFile.txt");         //used open function of ofstream class to open the text file
    out<<"this is a sample file"<<endl;
    out<<"this is also a sample file";
    out.close();

    ifstream in;
    in.open("sampleFile.txt");
    string st1,st2,st3,st4,st5,st6;
    in>>st1>>st2>>st3>>st4>>st5;
    cout<<st1<<" "<<st2<<" "<<st3<<" "<<st4<<" "<<st5<<endl;
    
    // getline(in,st6);        //working still not taking 2nd line...
    // cout<<st6;

    while(in.eof()==0)         //eof = end  of file
    {
        getline(in,st6);
        cout<<st6;                //this will print the 2nd line only as 1st line is already extracted upto st5...
    }
    in.close();
}
*/







                                        //Templates in C++    

                                        //CLASS TEMPLATES:- 
/*
#include<iostream>
using namespace std;
                                //creating integer vector class
class vecto {
    public:
    int* arr;
    int size;
        vecto(int m){
            size = m;
            arr = new int[size];
        }

        int dotP(vecto &v){                     //function to take dot product of each element
            int d=0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }

};
                                //creating float vector class
class vectoF {
    public:
    float* arr;
    int size;
        vectoF(int m){
            size = m;
            arr = new float[size];
        }

        float dotP(vectoF &v){
            float d=0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }

};

int main(){
    vecto v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vecto v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 5;

    cout<<v1.dotP(v2)<<endl;        //(4*1 + 3*2 + 1*5)

    vectoF v3(3);
    v3.arr[0] = 4.1;
    v3.arr[1] = 3.1;
    v3.arr[2] = 1.1;

    vectoF v4(3);
    v4.arr[1] = 1.2;
    v4.arr[0] = 2.2;
    v4.arr[2] = 5.2;

    cout<<v3.dotP(v4)<<endl;   //(4.1*1.2 + 3.1*2.2 + 1.1*5.2)
}
*/



        //Here above we had to create 2 vector classes separatedly for integer & float now creating a template, following DRY rule 

/*
#include<iostream>
using namespace std;

template <class T>
class vect{
    public:
    T* arr;
    int size;

    vect(int m){
        size = m;
        arr = new T[size];
    }

    T dotP(vect &v){
            T d=0;
            for(int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
                            //INTEGER TEMPLATE
    vect <int> v1(3);
    v1.arr[0] = 4;                 
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vect <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 5;

    cout<<v1.dotP(v2)<<endl;   //(4*1 + 3*2 + 1*5)
            
                            //FLOAT TEMPLATE
    vect <float> v3(3);
    v3.arr[0] = 4.1;
    v3.arr[1] = 3.1;
    v3.arr[2] = 1.1;

    vect <float> v4(3);
    v4.arr[1] = 1.2;
    v4.arr[0] = 2.2;
    v4.arr[2] = 5.2;

    cout<<v3.dotP(v4)<<endl;   //(4.1*1.2 + 3.1*2.2 + 1.1*5.2)
}
*/



                                //MULTIPLE TEMPLATES
/*                                
#include<iostream>
using namespace std;
template<class t1, class t2>
class temp{
    public:
    t1 a;
    t2 c;

    temp(){}            //default const.

    temp(t1 a, t2 b){
        this->a=a;
        this->c=b;
    }
    void display(){
        cout<< this->a<<" "<<this->c<<endl;
    }
};

int main(){
    temp<int, char> obj;
    temp<float, string> obj2(2.3, "milind");
    obj.a = 5;
    obj.c = 'c';

    obj.display();
    obj2.display();
}
*/



                                        //PASSING DEFAULT DATA-TYPES IN TEMPLATE
/*
#include<iostream>
using namespace std;
template<class t1=int, class t2=float, class t3=char>
class mili{
    public:
    t1 data1;
    t2 data2;
    t3 data3;
    mili(t1 a, t2 b, t3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<"the value of 1st data is: "<<data1<<endl;
        cout<<"the value of 2nd data is: "<<data2<<endl;
        cout<<"the value of 3rd data is: "<<data3<<endl;
    }

};
int main(){
    mili<> m(4, 4.6,'c');                                   //default template 
    m.display();
    cout<<endl;
    mili<float,string,char> s(4.6, "milind", 's');          //redefined the default template
    s.display();
}
*/



                                        //FUNCTION TEMPLATES
/*
#include<iostream>
#include<string>
using namespace std;
template<class t1, class t2>
float avg(t1 a, t2 b){
    return (a+b)/2.0;
}
template<class t1, class t2>
void swapp(t1 &a, t2 &b){
    t2 temp = a;
    a = b;
    b = temp;
}
int main()
{
    printf("avg value is %.2f\n",avg(2,3));         //taking interger & returning float
    printf("avg value is %.2f\n",avg(2,4));
    printf("avg value is %.2f\n",avg(1.1,8.9));     //taking floats & returning float
    printf("avg value is %.2f\n",avg(1.3,9.9));
    printf("avg value is %.2f\n",avg(1,9.9));       //taking int & float    returing float
    cout<<endl;
    float a = 6.0;
    float b = 3.4;                        //not working properly if taking one data type as integer and another as float 
    swapp(a, b);
    cout<<a<<" & "<<b<<endl;
    return 0;
}
*/



                                //WRITING FUNCTION OUTSIDE THE CLASS USING SCOPE RESOLUTION
/* 
#include<iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Harry<T> :: display(){          //Scope resolution in templates
    cout<<data<<endl;
}

int main()
{
    Harry<int> h(5);
    Harry<float> h2(9.8);
    Harry<char> h3('v');
    cout << h.data << endl;
    h.display();
    h2.display();
    h3.display();
    return 0;
}
*/



                                            //TEMPLATE OVERLOADING
/*
#include<iostream>
using namespace std;

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    func(4);    //function with Exact match datatype takes the highest priority & will override the template function  here int data type function is already available so it will over ride template function
    func(4.5);  //here templatised function will be called as there's no float data type funct made in class to override
    return 0;
}
*/





                        //STL :- STANDARD TEMPLATE LIBRARY = Containers + Algo + Iterators
                        
//Containers :- 
    // Sequence Containers --> Linear Fashion :- Vector, linked List, Dequeue
    // Associative Containers --> Direct Access :- Dictionary(Map, MultiMap) , Set,MultiSet, Tree
    // Derived Containers --> Real World Modeling :- Stack, Queue, Priority Queue




// * 2D Vectors :- vector of vectors( syntax:- vector<vector<int>> Lvec(vec1,vec2);)   --> See GFG

                        
                                                
                                                
                                //STL Array :- all methods of vector works here 
/*
#include<iostream>
#include<array>
using namespace std;
int main()
{
        int arr[4] = {1,2,3,4};                 //Basic method of initializing array
        array<int, 4> a = {0,1,2,3};            // STL Array 
        return 0;
}
*/        


                                              
                //Sequence Containers :- Stores Data sequentially in continugous mannner 

                                //1. Vector :- (Array with resizable length)
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){

//ways to create vector
        vector<int> vec;                      // ZERO length integer vector
        vector<int> vec1 = {9,7,8,0,3};
        vector<int> vec2(5,-9);               // vector of size 5 will be created with all elements as -9
        vector<int> vec3(vec1);               // make a copy of vec 1 as vec 3
        vector<char> vec5(4);                 // 4-element character vector

    

//Methods in Vector :-  urVectorName.method()

        //1. .size()  &  .capacity()
            cout<<vec.size()<<endl;             //size  is no of element present in vector
            cout<<vec.capacity()<<endl;         // Capacity is no of element that a vector can hold
    
        //2. .push_back()  :- Add element at last
                vec.push_back(3);
                vec.push_back(1);
                vec.push_back(2); 
                vec.push_back(5); 
                vec.push_back(4); 
                vec.push_back(9); 

        //3. emplace_back()   :- similar to push back but it reads emplace objects also, it construct and append new element directly 
                vec.emplace_back(6);
                vec.emplace_back(0);

        //4. pop_back() :- delete last element 
                vec.pop_back();

        //5. indexing :-
                cout<< "value at index 2 is "<<vec[2]<<endl;
                cout<< "value at index 3 is "<<vec.at(3)<<endl;
                cout<< "Front Element "<<vec.front()<<endl;
                cout<< "last Element "<<vec.back()<<endl;

        //6. Erase :- 
                vec.erase(vec.begin());                               //can't pass index
                vec.erase(vec.begin()+3);                             //delete the element at index 3
                vec.erase(vec.begin() + 1, vec.begin() + 4);          //will erase a range of elements
                //vec.erase(vec.at(3));                               //Don't works like this anyhow we will be using iterator as we have done in abv example
        
        //7. Insert :-
                vec.insert(vec.begin()+2, 100);           //will insert 100 at given index, here 2 is given as index with help of iterator
                vec.insert(vec.begin()+3, 5, 50);         // will insert 50 at index 3, FIVE times  


        // Taking user input:- 
                int a;
                cin>>a;
                vec.push_back(a);

        // Taking user input using loops :-   (Can be done using iterator also)
                for(int i=0; i<5; i++)
                {
                    int element;
                    cin>>element;
                    vec.push_back(element);
                }



        //printing elem of vector using for-each loop (for-in & for-of don't work in C++)
                for(int val : vec){
                    cout << val <<" ";
                } 
                cout<<endl;


        //8. Clear :-
                vec.clear();            //will clear the whole vector but capicity will remained same 


                for(int val : vec){
                    cout << val <<" ";
                } 

                cout<<"Vector cleared"<<endl;
                cout<<vec.size()<<endl;
                cout<<vec.capacity()<<endl;          //this will not change even after deleting elements or clearing the whole vector

    
        //9. Empty :- Boolean 
                cout<<vec.empty();         //Returns 1 for empty vector & 0 for non-empty vector

    return 0;
}
*/


                                //CREATING FUNCTION TO DISPLAY VECTOR
/* 
#include<iostream>
#include<vector>
using namespace std;

template <class t>                        //created a function with varing vector dataType
void display(vector<t> &v){
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
}

int main()
{
        vector<int> v;
        v.push_back(9);
        v.push_back(10);

        display(v);
}
*/

 


                                        //Iterators :- (works as pointer)
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> v={0,1,2,3,4,5};

        for(int val:v){
                cout<<val<<" ";
        }
        cout<<endl;

//1  .begin() :-
        cout<< *(v.begin()) <<endl;    //returns the value at index 0 on derefrencing

//2  .end()   :- 
        cout<< *(v.end()-1) <<endl;    //v.end() gives garbage value as it points value at index n not (n-1)

//3  .rbegin()  :-  
        cout<< *(v.rbegin()) <<endl;   //this will point (n-1) so won't through garbage

//4  .rend()    :-
        cout<< *(v.rend()) <<endl;     //reverse end won't points 1st element but a garbage value coming just before the 1st element         


//Creating a loop through iterator
        vector<int> :: iterator it;                     //created an iterator it 

        for(it = v.begin(); it!=v.end(); it++){        //here also we can use "auto" keyword to skip the initialization of iterator
                cout<< *(it) <<" ";
        }
        cout<<endl;

//Creating a REVERSE loop through iterator
        //vector<int> :: reverse_iterator it;           //instead of initializing it here we can put this into the bracket below where loop is created
        
        //for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++){
        //        cout<< *(it) <<" ";
        //}
   
   //SHORTCUT:-    
        for(auto it=v.rbegin(); it!=v.rend(); it++){      //whole above thing can be sorted into a keyword 'auto'
                cout<< *(it) <<" ";                       //Instead of  "it!=v.rend()"  we can also use  "it<v.rend()"
        }
}
*/  


                 


                        //2. Lists :- Doubly Linked List        (Forward list :- Singly linked list)

//          * Also Sequential Container like vector   
//          * Implemented & work as Doubly Linked List
//          * Can be push & pop from front & back both
//          * Iterator works here too
//          * .size(), .erase(), .clear(), begin, end, rbegin, rend(), insert, front, back    all these methods are also defined

/*
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;                                //integer list of 0 length
    list<int> l2 = {0,12,3,21,56};
    list<int> l3(5);                            //integer list of 5 length

    l.push_back(2);
    l.push_back(1);
    l.push_back(0);
    l.push_front(9);
    l.push_front(3);
    l.push_front(5);

    l.emplace_back(8);
    l.emplace_front(7);

    l2.pop_back();
    l2.pop_front();

//cout<<l[3];         //Random Access is not possible here
     
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;

    for(int val : l2){
        cout<<val<<" ";
    }



//Sorting a list
    cout<<"after sorting: ";
    l1.sort();

    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;


//merging a list
    cout<<"after merging: ";
    l1.merge(l3);
                   //integer list and character list can't be merged
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;


//reverse a list
    cout<<"after reverse: ";
    l1.reverse();

    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;


    return 0;
}
*/







                        //3. Deque :- Double Ended Queue

// * Deque :- means double ended queue works totally same as list
// * Dequeue :- method to pop an element from a queue
// * All methods from list works here also
// * List is internally a doubly linked list :- Random Access is not possible.
// * Deque is internally implemented with help of dynamic Array :- so Random Access is possible here

/*
#include<iostream>
#include<deque>
using namespace std;

int main(){
        deque<int> d={1,2,6,4};

        for(int val : d){
             cout<<val<<" ";
        }
        cout<<endl;

//Indexing possible in Deque & Vector but not in List
        cout<<d[3]<<endl;
        cout<<d.at(3)<<endl;
}
*/




                                //Pairs :- part of c++ utility library
/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
        pair<int, int> p = {3,4};                               //similary Pairs of Array or vector can also be created
        pair<char, int> p2 = {'a',2};                           // Just pass array data type inside the PAIR
        pair<string, float> p3 = {"mili",0.1};
        pair<char, string> p4 = {'K',"Mili"};

        cout<<p.first<<endl;
        cout<<p.second<<endl;
        cout<<p2.first<<endl;
        cout<<p2.second<<endl;
        cout<<p3.first<<endl;
        cout<<p3.second<<endl;
        cout<<p4.first<<" ";
        cout<<p4.second<<endl;

cout<<endl;

        pair<int, pair<int,char>> p5 = {1, {2,'m'}};
        cout<<p5.first<<endl;
       // cout<<p5.second<<endl;    //will throw error
        cout<<p5.second.first<<" ";
        cout<<p5.second.second<<endl;





                                // VECTOR of PAIRs :-

vector<pair<int,int>> vec = {{1,2}, {2,3}, {5,6}};

//Push_Back VS Emplace_Back
        vec.push_back({8,9});
        vec.emplace_back(8,9);          //create in-place objects so no need to define the inputs in pair it will create them in paired object automatically


//Taking User Input
        int a,b;
        cout<<"enter 1st no of pair: ";
        cin>>a;
        cout<<"enter 2nd no of pair: ";
        cin>>b;
        vec.push_back({a,b});


        // for(pair val : vec){          //can't print like this 
        //         cout<<val<<" ";
        // }
        // cout<<endl;

        for(pair<int,int> val : vec){
                cout<<val.first<<" "<<val.second<<endl;
        }
        cout<<endl;



                                // ARRAY of PAIRs:-

pair<int, int> arr[] = {{1,2},{2,3},{3,4},{8,9}};

cout<<"array pairs:\n";

for(auto val : arr){
        cout<<val.first<<" "<<val.second<<endl;     
}

}
*/



                                       //Non-Sequential Containers

                        //1. STACK:- LIFO :--  element added at the last will be popped out first
/*                        
#include<iostream>
#include<stack>
using namespace std;

int main(){
        stack<int> s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.emplace(4);
        s.emplace(5);

        cout<<"initial size of S= "<<s.size()<<endl;

        cout<<"top = "<<s.top()<<endl;                  //returns the topmost i.e lastly added element
        s.pop();                                        //top most element added at last will be removed

        stack<int> s2;
        cout<<"initial size of S3: "<<s2.size()<<endl;

//SWAP :- Swap elements of 2 stacks
        s2.swap(s);                                     //all element of S will be swapped with S2

        cout<<"Updated size of S: "<<s.size()<<endl;
        cout<<"Updated size of S2: "<<s2.size()<<endl;


        stack<int> s3;
        s3.push(0);
        s3.push(9);
        s3.push(7);
        cout<<"initial size of S3: "<<s3.size()<<endl;
        s3.swap(s2);
        cout<<"Updated size of S2: "<<s2.size()<<endl;
        cout<<"Updated size of S3: "<<s3.size()<<endl;


//Imp Loop used in Qs:-
        while(!s2.empty()){                     //while stack is not empty
                cout<<s2.top()<<endl;           //Print the topmost element
                s2.pop();                       //And pop them out sequentially
        }

}
*/



                        //2. Queue:- FIFO   :- element added at the begining will be popped out first

//      * push, emplace, front, pop, size, empty, swap
//      * Every thing same as stack just we have "front" here instead of top
/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
        queue<int> q;

        q.push(1);
        q.push(2);
        q.push(3);
        q.emplace(4);
        q.emplace(5);

        cout<<q.front()<<endl;
        cout<<q.size()<<endl;


//Imp Loop used in Qs:-
        while(!q.empty()){                //while queue is not empty
                cout<<q.front()<<" ";     //Print the front element i.e the element which was added 1st 
                q.pop();                  //And pop them out sequentially
        }
}
*/



                                                //3. Priority Queue
                                                
//      * push, emplace, top, pop, size, empty
/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
        priority_queue<int> q;                  //MAX HEAP

        q.push(4);
        q.push(10);
        q.push(2);
        q.emplace(19);

        while(!q.empty()){
                cout<<q.top()<<" ";     //largest will be at the top of priority stack/queue
                q.pop();                            
        }
        cout<<endl;

// Reverse Priority Queue to place shortest element at the top of the stack
        priority_queue<int, vector<int>, greater<int>> rq;                              //MIN HEAP

        rq.push(4);
        rq.push(10);
        rq.push(2);
        rq.emplace(19);

        while(!rq.empty()){
                cout<<rq.top()<<" ";     //largest will be at the top of priority stack/queue
                rq.pop();                            
        }
}
*/



                                            //4. MAP
//stores (key, value) pairs
//KEY will be unique
//associative array like dictionary of python

/*
#include<iostream>
#include<map>
using namespace std;

int main(){
        map<string, int> m;

        m["tv"] = 100;
        m["laptop"] = 100;
        m["headphones"] = 50;
        m["tablet"] = 120;
        m["watch"] = 50;

//Insert :-
        m.insert({"camera", 25});
        //m.insert({"camera", 25},{"lens", 8});         //can't pass multiple keys & value like this
        //m.insert(make_pair("Ankit", 179));            //Used in old C++ extension 
//Emplace :-
        m.emplace("toolkit", 90);
//count :-
        cout<<"count = "<<m.count("laptop")<<endl;    //returns 1 if the key exist and 0 if it doesn't
        cout<<"laptop = " << m["laptop"]<<endl;
//Erase :- 
        m.erase("tv");
//Find :- 

        if(m.find("camera") != m.end()){
                cout<<"found\n";
        }
        else{
                cout<<"not found\n";
        }
        cout<<endl;
    
        cout<<"size: "<<m.size()<<endl;
        cout<<"max size: "<<m.max_size()<<endl;
        cout<<"empty value return as: "<<m.empty()<<endl;              //will return 0 for false as map 'm' is not empty

//since it pair kind of data so we can use 'auto' keyword here
        for(auto p: m){
                cout << p.first << " " << p.second <<endl;
        }
//Here it will be sorted according to KEY like in above case output thrown will be sorted in ascending order of alphabetical order of keys
}
*/



                               // 4A. Multi Map  :- Can have multiple keys of same name
/*
#include<iostream>
#include<map>
using namespace std;

int main(){
        multimap<string, int> m;

        m.emplace("tv",100);                    // m["tv"] = 100; :- can't be done like this
        m.emplace("remote",1000);
        m.emplace("watch",10);
        m.emplace("laptop",50);
        m.emplace("AC",5);
        m.emplace("AC",5);
        m.emplace("AC",5);
        m.emplace("tv",100);
        m.emplace("tv",80);

        for(auto p: m){
                cout << p.first << " " << p.second <<endl;
        }
cout<<endl<<endl;

        m.erase("tv");     //will erase all TV keys
        for(auto p: m){
                cout << p.first << " " << p.second <<endl;
        }
cout<<endl<<endl;

//To erase single key from the grp of similar keys
        m.erase(m.find("AC"));                          //m.find("AC") will return the iterator(memory location) of 1st AC key which will delete the 1st AC key
        for(auto p: m){
                cout << p.first << " " << p.second <<endl;
        }
}
*/



                        //4B. UnOrdered MAP :- Unlike MAP it throws output in random order not in ASC order of Keys      (Use mostly in DSA)
/*
#include<iostream>
#include<unordered_map>       //can't take duplicate Keys like multiMAP
using namespace std;

int main(){
        unordered_map<string, int> m;

        m["tv"] = 100;
        m["tv"] = 100;
        m["tv"] = 100;
        m["tv"] = 100;
        m["laptop"] = 100;
        m["headphones"] = 50;
        m["tablet"] = 120;
        m["watch"] = 50;

        for(auto p: m){
                cout << p.first << " " << p.second <<endl;
        }
}
*/



                                        //5. SET
//      * It also works as Tree internally similar to MAP
//      * Insert, Emplace, Count, Erase    :- O(n) complexity
//      * Find, Size, Empty, Erase
/*
#include<iostream>
#include<set>
using namespace std;

int main(){
        set<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

           s.insert(1);                  //Don't take duplicate values  
           s.insert(2);
           s.insert(3);

        cout<<s.size()<<endl;

        for(int val : s){               //here instead of "int" we can also put "auto"
                cout<<val<<" ";
        }
        cout<<endl;

//Lower Bound
        cout<< "lower bound for 4 = "<< *(s.lower_bound(4)) <<endl;        //returns same number as given as input if that number exist in SET
        cout<< "lower bound for 6 = "<< *(s.lower_bound(6)) <<endl;        // Or will returns slight greater number available in the SET if inputted number is not there in the SET
        cout<< "lower bound for 7 = "<< *(s.lower_bound(7)) <<endl;
        cout<< "lower bound for 9 = "<< *(s.lower_bound(9)) <<endl;        // If no value in the SET is either equal to or greater than given Input then it will return   "s.end();"
cout<<endl;

//Upper Bound
        cout<< "upper bound for 4 = "<< *(s.upper_bound(4)) <<endl;        //Will always return a greater value to our input (not same not small always greater)
        cout<< "upper bound for 6 = "<< *(s.upper_bound(6)) <<endl;
        cout<< "upper bound for 8 = "<< *(s.upper_bound(8)) <<endl;        //if greater value doesn't exist it will return  "s.end();"
        cout<< "upper bound for 9 = "<< *(s.upper_bound(9)) <<endl;
        cout<< "upper bound for 0 = "<< *(s.upper_bound(0)) <<endl;        //Even if the input value is not in the SET it will return a value greater than this
}
*/



                                        //5B. Multi SET
/*                                
#include<iostream>
#include<set>
using namespace std;

int main(){
        multiset<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

          s.insert(1);       // Will take duplicates also
          s.insert(2);
          s.insert(3);

        for(auto val : s){            
                cout<<val<<" ";
        }
}
*/



                                //5C. Unordered SET :- As it's not sorted so LOWER_Bound & UPPPER_Bound doesn't exist here
/*                             
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
        unordered_set<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

          s.insert(1);       // Won't take duplicates also
          s.insert(2);
          s.insert(3);

        for(auto val : s){              //will return in random order 
                cout<<val<<" ";
        }
}
*/



                                       // FUNCTORS (Function Objects)
//  Treating an obj as a function 
//  Using fuction as an abj by wrapping it into class

/*           
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,72,4,7,43,0,9};
    sort(arr, arr+6);                   //will sort upto 6 elements
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+6, greater<int>());   //will sort into decreasing
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
*/
//Function objects are caller 'FUNCTOR' here "greater<int>()" is a functor as sort method takes object as an argument






                                        //Custom Comparators
                                        
//Boolean values Returns True/False on basic of certain comparisions
//Pairs :- To sort accoring to 2nd values we will need to define custom comparators 
/*
#include<iostream>
#include<vector>
using namespace std;

//Create a comparator of any name and pass DATA Type need to be compared as argument,  HERE 2 pairs need to be compared so we passed 2 pairs data types as argument
bool comp(pair<int,int> p1, pair<int,int> p2){                  

        if(p1.second < p2.second) return true;
        else return false;
}

int main(){
        vector<pair<int,int>> v = {{3,5},{1,8},{2,0},{5,3}};

        sort(v.begin(), v.end(), comp);

        for(auto val:v){
                cout<<val.first<<" "<<val.second<<endl; 
        }

}
*/


// Logic to sort the pair accoring to 2nd element of pair but if 2nd element is same then sort according to 1st pair
/*
#include<iostream>
#include<vector>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){                  

        // if(p1.second < p2.second){
        //         return true;
        // }
        // else if(p1.second = p2.second){
        //         if(p1.first < p2.first) return true;
        //         else return false;                
        // }
        // else return false;

//In shorter way :-
        if(p1.second < p2.second) return true;     //these two conditions will be checked 1st
        if(p1.second > p2.second) return false;

        if(p1.first < p2.first) return true;       //if it does fall under any of two above conditions this condition will be check so for  "p1.second = p2.second" this condition will be checked
        else return false;
}

int main(){
        vector<pair<int,int>> v = {{3,5},{1,8},{2,0},{5,3},{4,3},{4,2},{7,8}};

        sort(v.begin(), v.end(), comp);

        for(auto val:v){
                cout<<val.first<<" "<<val.second<<endl; 
        }

}
*/



                                                // Algorithms
                                
                                //   1. SORTING :- by default it sorts in ascending order
//Array
/*
#include<iostream>
using namespace std;

int main(){
        int arr[8] = {3,2,5,8,0,9,1,1};
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;        

        sort(arr, arr+4);              //will sort these indices :- 0,1,2,3
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;

        sort(arr, arr+8);
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/


// Vector
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2};

        sort(vec.begin(), vec.end());

        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/


                                                //SORTING

//      * Sorting function is based on intro sort :- combination of 3 sorting techniques (Quick Sort, Heap Sort, Insertion Sort)
//      * Comparator is a function that tells the logic of comparision  
//      * In Descending Order, we pass a comparator or functor
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2};

        sort(vec.begin(), vec.end(), greater<int>());          //this comparator tells which no is greater and data will be sorted accordingly

        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/

//Pairs
/*
#include<iostream>
using namespace std;

int main(){
        vector<pair<int, int>> vec = {{3,5},{1,8},{2,0},{5,3}};

        sort(vec.begin(), vec.end());       //will sort pairs accoring to 1st value, won't sort the element within the pair

        for(auto val:vec){
                cout<<val.first<<" "<<val.second<<endl; 
        }
}
*/





                                        // 2. Reverse & ROTATE
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2,4,5,7,0};
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;


        reverse(vec.begin()+1, vec.begin()+4);
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;


        reverse(vec.begin(), vec.end());
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;

        rotate(vec.begin(), vec.begin()+3, vec.end());      //will place starting 3 elements at last,   if we do as "vec.begin()+4" then starting 4 elements will be placed at end 
        cout<<"after rotate: ";
        for(auto val:vec){
                cout<<val<<" ";
        }
}
*/



                                        // 3. Next/Prev Permutation
/*
#include<iostream>
using namespace std;
int main(){
        string s = "abc";
        next_permutation(s.begin(),s.end());
        cout<<s<<endl;
        next_permutation(s.begin(),s.end());
        cout<<s<<endl;
        prev_permutation(s.begin(),s.end());
        cout<<s<<endl;

//Total perm.        :---  Not Working Check error 
// int count = 0;
// while(next_permutation(s.begin(),s.end()) != "abc"){
//         cout<<s<<endl;
//         count++;
// }
// cout<<count;
}
*/




                                // Max Element & Min Element
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> vec = {1,2,3,4,5,6};
        cout << *(max_element(vec.begin(), vec.end()))<<endl;
        cout << *(min_element(vec.begin(), vec.end()))<<endl;

        return 0;
}
*/




                                        // Binary Search
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> vec = {1,2,3,4,5,6};
        cout << binary_search(vec.begin(), vec.end(), 4)<<endl;         //Returns 1 if found (true)
        cout << binary_search(vec.begin(), vec.end(), 10)<<endl;         //Returns 0 if not found (false)

        return 0;
}
*/





                                                        //Upper_Bound & Lower Bound

//The upper bound function returns an iterator that points to the first value that is greater than a specified value. 
//The lower bound function returns an iterator that points to the first value that is equal to or greater than a specified value. 

//lower_bound(v.begin(), v.end(), 4) returns an iterator pointing to the first element in the range [v.begin(), v.end()) that is not less than 4.
//Subtracting v.begin() from this iterator gives the index of the first element that satisfies the condition.

//upper_bound(v.begin(), v.end(), 4) returns an iterator pointing to the first element in the range [v.begin(), v.end()) that is greater than 4.
//Again, subtracting v.begin() provides the index.

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> v = {1,2,3,4,5,6};                                                  //it returns output according to sorted data
        cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;      
        cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;       
        return 0;
}
*/





                                        // Count SET Bits
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
        int n = 15;
        cout<< __builtin_popcount(n) << endl;

        long int n2 = 15;
        cout<< __builtin_popcountl(n2) << endl;

        long long int n3 = 15;
        cout<< __builtin_popcountll(n3) << endl;

        return 0;
}
*/





                                        // SWAP, MIN, MAX
/*                                
#include<iostream>
#include<string>
using namespace std;
int main()
{
        cout<<min(4,5)<<" "<<max(2,10)<<endl;
        int a=10;
        int b=20;
        swap(a,b);
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        return 0;
}
*/