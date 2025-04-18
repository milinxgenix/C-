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

        // Taking user input using loops :-
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