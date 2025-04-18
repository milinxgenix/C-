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
