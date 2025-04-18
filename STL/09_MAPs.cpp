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
