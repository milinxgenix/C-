                                                // Algorithms
                                
                                //   1. SORTING :- by default it sorts in ascending order
//Array
/*
#include<iostream>
using namespace std;

int main(){
        int arr[8] = {3,2,5,8,0,9,1,1};
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;        

        sort(arr, arr+4);              //will sort these indices :- 0,1,2,3
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;

        sort(arr, arr+8);
        for(auto val: arr){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/


// Vector
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2};

        sort(vec.begin(), vec.end());

        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/


                                                //SORTING

//      * Sorting function is based on intro sort :- combination of 3 sorting techniques (Quick Sort, Heap Sort, Insertion Sort)
//      * Comparator is a function that tells the logic of comparision  
//      * In Descending Order, we pass a comparator or functor
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2};

        sort(vec.begin(), vec.end(), greater<int>());          //this comparator tells which no is greater and data will be sorted accordingly

        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;
}
*/

//Pairs
/*
#include<iostream>
using namespace std;

int main(){
        vector<pair<int, int>> vec = {{3,5},{1,8},{2,0},{5,3}};

        sort(vec.begin(), vec.end());       //will sort pairs accoring to 1st value, won't sort the element within the pair

        for(auto val:vec){
                cout<<val.first<<" "<<val.second<<endl; 
        }
}
*/





                                        // 2. Reverse & ROTATE
/*
#include<iostream>
using namespace std;

int main(){
        vector<int> vec = {3,5,1,8,2,4,5,7,0};
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;


        reverse(vec.begin()+1, vec.begin()+4);
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;


        reverse(vec.begin(), vec.end());
        for(auto val:vec){
                cout<<val<<" ";
        }
        cout<<endl;

        rotate(vec.begin(), vec.begin()+3, vec.end());      //will place starting 3 elements at last,   if we do as "vec.begin()+4" then starting 4 elements will be placed at end 
        cout<<"after rotate: ";
        for(auto val:vec){
                cout<<val<<" ";
        }
}
*/



                                        // 3. Next/Prev Permutation
/*
#include<iostream>
using namespace std;
int main(){
        string s = "abc";
        next_permutation(s.begin(),s.end());
        cout<<s<<endl;
        next_permutation(s.begin(),s.end());
        cout<<s<<endl;
        prev_permutation(s.begin(),s.end());
        cout<<s<<endl;

//Total perm.        :---  Not Working Check error 
// int count = 0;
// while(next_permutation(s.begin(),s.end()) != "abc"){
//         cout<<s<<endl;
//         count++;
// }
// cout<<count;
}
*/




                                // Max Element & Min Element
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> vec = {1,2,3,4,5,6};
        cout << *(max_element(vec.begin(), vec.end()))<<endl;
        cout << *(min_element(vec.begin(), vec.end()))<<endl;

        return 0;
}
*/




                                        // Binary Search
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> vec = {1,2,3,4,5,6};
        cout << binary_search(vec.begin(), vec.end(), 4)<<endl;         //Returns 1 if found (true)
        cout << binary_search(vec.begin(), vec.end(), 10)<<endl;         //Returns 0 if not found (false)

        return 0;
}
*/





                                                        //Upper_Bound & Lower Bound

//The upper bound function returns an iterator that points to the first value that is greater than a specified value. 
//The lower bound function returns an iterator that points to the first value that is equal to or greater than a specified value. 

//lower_bound(v.begin(), v.end(), 4) returns an iterator pointing to the first element in the range [v.begin(), v.end()) that is not less than 4.
//Subtracting v.begin() from this iterator gives the index of the first element that satisfies the condition.

//upper_bound(v.begin(), v.end(), 4) returns an iterator pointing to the first element in the range [v.begin(), v.end()) that is greater than 4.
//Again, subtracting v.begin() provides the index.

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> v = {1,2,3,4,5,6};                                                  //it returns output according to sorted data
        cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;      
        cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;       
        return 0;
}
*/





                                        // Count SET Bits
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
        int n = 15;
        cout<< __builtin_popcount(n) << endl;

        long int n2 = 15;
        cout<< __builtin_popcountl(n2) << endl;

        long long int n3 = 15;
        cout<< __builtin_popcountll(n3) << endl;

        return 0;
}
*/





                                        // SWAP, MIN, MAX
/*                                
#include<iostream>
#include<string>
using namespace std;
int main()
{
        cout<<min(4,5)<<" "<<max(2,10)<<endl;
        int a=10;
        int b=20;
        swap(a,b);
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        return 0;
}
*/