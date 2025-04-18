                                        //5. SET
//      * It also works as Tree internally similar to MAP
//      * Insert, Emplace, Count, Erase    :- O(n) complexity
//      * Find, Size, Empty, Erase
/*
#include<iostream>
#include<set>
using namespace std;

int main(){
        set<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

           s.insert(1);                  //Don't take duplicate values  
           s.insert(2);
           s.insert(3);

        cout<<s.size()<<endl;

        for(int val : s){               //here instead of "int" we can also put "auto"
                cout<<val<<" ";
        }
        cout<<endl;

//Lower Bound
        cout<< "lower bound for 4 = "<< *(s.lower_bound(4)) <<endl;        //returns same number as given as input if that number exist in SET
        cout<< "lower bound for 6 = "<< *(s.lower_bound(6)) <<endl;        // Or will returns slight greater number available in the SET if inputted number is not there in the SET
        cout<< "lower bound for 7 = "<< *(s.lower_bound(7)) <<endl;
        cout<< "lower bound for 9 = "<< *(s.lower_bound(9)) <<endl;        // If no value in the SET is either equal to or greater than given Input then it will return   "s.end();"
cout<<endl;

//Upper Bound
        cout<< "upper bound for 4 = "<< *(s.upper_bound(4)) <<endl;        //Will always return a greater value to our input (not same not small always greater)
        cout<< "upper bound for 6 = "<< *(s.upper_bound(6)) <<endl;
        cout<< "upper bound for 8 = "<< *(s.upper_bound(8)) <<endl;        //if greater value doesn't exist it will return  "s.end();"
        cout<< "upper bound for 9 = "<< *(s.upper_bound(9)) <<endl;
        cout<< "upper bound for 0 = "<< *(s.upper_bound(0)) <<endl;        //Even if the input value is not in the SET it will return a value greater than this
}
*/



                                        //5B. Multi SET
/*                                
#include<iostream>
#include<set>
using namespace std;

int main(){
        multiset<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

          s.insert(1);       // Will take duplicates also
          s.insert(2);
          s.insert(3);

        for(auto val : s){            
                cout<<val<<" ";
        }
}
*/



                                //5C. Unordered SET :- As it's not sorted so LOWER_Bound & UPPPER_Bound doesn't exist here
/*                             
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
        unordered_set<int> s;

        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(5);
        s.insert(4);
        s.insert(8);

          s.insert(1);       // Won't take duplicates also
          s.insert(2);
          s.insert(3);

        for(auto val : s){              //will return in random order 
                cout<<val<<" ";
        }
}
*/
