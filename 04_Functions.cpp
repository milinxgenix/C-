                        // RECALLING FUNCTIONS IN FUNCTIONS
/*
#include<iostream>
using namespace std;

int sum(int f, int g)
{
    return f + g;
}

int avg(int f, int g)
{
    return sum(f, g) / 2;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << sum(a, b) << endl;
    cout << "Average: " << avg(a, b) << endl;
}
*/



                                //Passing Array as an argument in a Function
/*
#include<iostream>
#include<string>
using namespace std;

void print_Array(int arr[], int size){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<", ";
        }
}

int main()
{
    int arr[5] = {1,28,4,5,6};
    //print_Array(arr, sizeof(arr));        //will include some garbage values also
    
    int n = 5;
    print_Array(arr, n);
    return 0;
}
*/
