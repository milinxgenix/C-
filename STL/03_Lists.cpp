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
