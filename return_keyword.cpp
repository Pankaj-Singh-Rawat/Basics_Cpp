#include <iostream>
using namespace std ;

// using return keyword in functions

int testFunction (int x){
    return x + 5 ;
} 

string testString(string name){
    return name + " " + "Rawat";
}

int main (){
    cout << testFunction(5) << endl ;
    cout << testString("Pankaj") ;
}