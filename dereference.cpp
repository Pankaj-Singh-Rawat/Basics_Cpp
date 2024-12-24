#include <iostream>
using namespace std ;

int main (){
    string food = "Pizza"; // variale declaration
    string* ptr = &food; // pointer declaration

    cout << ptr << endl ; // outputs the address of food ;
    cout << *ptr << endl ; // outputs the value stored at the address

}