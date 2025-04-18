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
