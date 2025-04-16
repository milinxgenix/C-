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

        int dotP(vecto &v){
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

    cout<<v1.dotP(v2)<<endl;   //(4*1 + 3*2 + 1*5)

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



        //Here above we had to create 2 vector classes separatedly for integer & float now creating a template to follow DRY rule 

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
                            //integer template
    vect <int> v1(3);
    v1.arr[0] = 4;                 
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vect <int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 5;

    cout<<v1.dotP(v2)<<endl;   //(4*1 + 3*2 + 1*5)

                            //float template
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



                                //multiple templates
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



                                        //passing default data-types in template
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
    mili<> m(4, 4.6,'c');      //default template 
    m.display();
    cout<<endl;
    mili<float,string,char> s(4.6, "milind", 's');   //initialised the default template
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
    printf("avg value is %.2f\n",avg(2,3));     //taking interger & returning float
    printf("avg value is %.2f\n",avg(2,4));
    printf("avg value is %.2f\n",avg(1.1,8.9));   //taking floats & returning float
    printf("avg value is %.2f\n",avg(1.3,9.9));
    printf("avg value is %.2f\n",avg(1,9.9));     //taking int & float    returing float
    cout<<endl;
    float a = 6.0;
    float b = 3.4;               //not working properly if taking one data type as integer and another as float 
    swapp(a, b);
    cout<<a<<" & "<<b<<endl;
    return 0;
}
*/



                                //writing function outside the class using Scope resolution
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



                                            //template overloading
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
    func(4);  //function with Exact match datatype takes the highest priority & will override the template function  here int data type function is already available so it will over ride template function
    func(4.5);  //here templatised function will be called as there's no float data type funct made in class to override
    return 0;
}
*/



                                            //STL :- STANDARD TEMPLATE LIBRARY = Containers + Algo + Iterators
//Containers :- 
    // Sequence Containers --> Linear Fashion :- Vector, linked List, Dequeue
    // Associative Containers --> Direct Access :- Dictionary(Map, MultiMap) , Set,MultiSet, Tree
    // Derived Containers --> Real World Modeling :- Stack, Queue, Priority Queue




                            //vectors :-   Array with resizable length   :- READ DOCUMENTATION 'CPplus'
/*
#include<iostream>
#include<vector>
using namespace std;

//creating function to display vector

//void display(vector<int> &v){            //vector<int> is used as a datatype here    function to display integer vector 

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
    //creating vectors
    vector<int> v;           // ZERO length integer vector
    vector<char> v2(4);      // 4-element character vector
    vector<char> v3(v2);     // creating a vector from another vector
    vector<int> v4(6, 13);   //create 6-element integer vector with all element as 13


//adding elements to vector from last
    v.push_back(9);
    v.push_back(10);
    v2.push_back('a');
    v2.push_back('b');
    v2.push_back('c');
    v2.push_back('d');

//displaying using funct made above
    display(v);
    display(v2);
    display(v3);
    display(v4);

//removing the last element
    // v.pop_back();
    // display(v);


//Displaying the vector (already made a function for it so commmenting this snipet)
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }


//giving user inputs as elements to vector using loops
    // for(int i=0; i<5; i++)
    // {
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }



//making iterator
    //vector<int> :: iterator iter = v.begin();    //iterator set to 1st element

//inserting at desired position 
    //      //v.insert(iter,33);                       //will insert 33 at the begining 
    // v.insert(iter+1, 5, 566);                  //will enter 566 FIVE times after the 1st element
    // display(v);
}
*/



                                //LIST
/*
#include<iostream>
#include<list>
using namespace std;

//Creating function to display iterator
    void display(list<int> &l){                  //template not working
        list<int> :: iterator it;
        it = l.begin();
        while(it!=l.end()){
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
    }

int main(){
    list<int> l1;       //integer list of 0 length
    list<int> l2(5);    //integer list of 5 length
    list<int> l3;

//Adding elements to empty list l1
    l1.push_back(2);
    l1.push_back(5);
    l1.push_back(19);
    l1.push_back(6);
    l1.push_back(16);
    l1.push_back(99);
    l1.push_back(0);
    l1.push_back(99);
    l1.push_back(76);

    l3.push_back(101);
    l3.push_front(109);
    l3.push_front(108);
    l3.push_front(111);
    l3.push_front(500);

//Creating Iterator
    // list<int> :: iterator iter;
    // iter = l1.begin();             //pointing to 1st element of list l1
    // cout<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl<<endl;


//Iterator using above made function
    display(l1);

//delete an element
    l1.pop_back();
    display(l1);
    l1.pop_front();
    display(l1);

//remove method
    l1.remove(99);   //will remove both 99s from the list
    display(l1);

//Giving values to elements of non-empty list l2
    // list<int> :: iterator iter;
    // iter = l2.begin();
    // for(iter = l2.begin(); iter!=l2.end(); iter++)
    // {
    //     cin>>*iter;
    // }
    // display(l2);

//Sorting a list
    cout<<"after sorting: ";
    l1.sort();
    display(l1);

//merging a list
    cout<<"after merging: ";
    l1.merge(l3);               //integer list and character list can't be merged
    display(l1);

//reverse a list
    cout<<"after reverse: ";
    l1.reverse();
    display(l1);
}
*/



                            //MAP:- associative array like dictionary of python
/*
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marks;
    marks["Milind"] = 98;
    marks["amrit"] = 106;
    marks["anuj"] = 7;

//Inserting values to map
    // marks.insert({"Ankit", 179});       //need to upgrade to c++11 to use this
    // marks.insert({"Shubh",198});
    marks.insert(make_pair("Ankit", 179));
    marks.insert(make_pair("Shubh", 198));




//Creating iterator
    map<string, int> :: iterator itr;
    for(itr = marks.begin(); itr!=marks.end(); itr++)
    {
        cout<<(*itr).first<<" => "<<(*itr).second<<endl;
        //cout<<itr->first<<" => "<<itr->second<<endl;
    }
    cout<<endl;
    cout<<"size: "<<marks.size()<<endl;
    cout<<"max size: "<<marks.max_size()<<endl;
    cout<<"empty value return as: "<<marks.empty()<<endl;    //will return 0 for false as map marks is not empty
    return 0;
}
*/




                            //FUNCTION OBJ :- using fuction as an abj by wrapping it into class
                    //Treating an obj as a function 
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
