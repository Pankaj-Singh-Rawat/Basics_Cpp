#include <iostream>
using namespace std ;

int main (){
    string food = "Pizza" ;
    cout << food << endl; // prints the value of food 
    cout << &food << endl; // prints the memory address of food

    // A pointer is a variable that stores the memory address as it's value
    string* ptr = &food;

    cout << ptr << endl; // outputs the memory address of food with the pointer 

}