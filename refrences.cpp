#include <iostream>
using namespace std;

int main (){
    // C++ Refrences : creating refrences
    string food = "Pizza";
    string &meal = food ; //refrencing to food ;

    // now we can use either the valriable food or the refrence meal to give the output
    cout << food << endl ;
    cout << meal << endl ; // same output as of food

    // memory address
    cout << &food << endl ; // prints the address of the food variable
    
}