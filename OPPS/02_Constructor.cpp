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




                                            //Use of Constructor with Pointer

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
        name = "NIL";                                   // for String we should put 'NIL' 
        author = "NIL";
        price = 0;                                      // for Int, Float etc we will assing '0' 

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
