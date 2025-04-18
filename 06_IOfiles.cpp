                                        // I/O files :- (fstreambase, ifstream, ofstream) classes
                                        // ofstream:- to write into the file
                                        // ifstream:- to read contents of files 

//writting a txt file
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    string st3 = "hello milind! this is a sample text file";
    ofstream out("sampleFile.txt");                  //created an object of name 'out', of ofstream class
    out<<st3;

    out.close();        //using this we can read and write together in same code i.e in same int main()...
}
*/


//reading a txt file 
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st;
    string st2;
    ifstream in("sampleFile.txt");      //reading the file with help of 'in' object of ifstream class
    //in>>st;                           //will extract single word from file 
    //cout<<st<<endl;
    getline(in,st2);                    //extracting the content of file to st2
    cout<<st2<<endl;

    in.close();                 //using this we can read and write together in same code i.e in same int main()...
}
*/


//taking user input to write in file
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    string st3;
    getline(cin, st3);
    ofstream likh("sampleFile.txt");        //likh is name of object in above examples obj were named as out and in...  
    likh<<st3;

    likh.close();
}
*/



//method-2
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){ 
    ofstream out;                       //created an obj "out" of ofstream class
    out.open("sampleFile.txt");         //used open function of ofstream class to open the text file
    out<<"this is a sample file"<<endl;
    out<<"this is also a sample file";
    out.close();

    ifstream in;
    in.open("sampleFile.txt");
    string st1,st2,st3,st4,st5,st6;
    in>>st1>>st2>>st3>>st4>>st5;
    cout<<st1<<" "<<st2<<" "<<st3<<" "<<st4<<" "<<st5<<endl;
    
    // getline(in,st6);        //working still not taking 2nd line...
    // cout<<st6;

    while(in.eof()==0)         //eof = end  of file
    {
        getline(in,st6);
        cout<<st6;                //this will print the 2nd line only as 1st line is already extracted upto st5...
    }
    in.close();
}
*/
