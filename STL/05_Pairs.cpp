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



 