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
