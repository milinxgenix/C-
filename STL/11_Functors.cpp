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
