#include <iostream>
using namespace std ;

int main(){
    // we can simply use if else like :

    if ( 20 > 18 ){ // here in if block checks the condition inside the (condtion here)
        cout << "20 is greater than 18" << endl; // and if condition is satisfied the code is then executed
    }

    // we can also use else statements :
    if ( 20 < 18 ){
        cout << "20 is smaller than 18" << endl; // here the condition turns out to be false
    } else {                             // in that case 
        cout << "20 is greater than 18 " << endl; // the else statement will run and give the output
    }

    // we also have one more functionality in if conditional statements
    int x = 21 , y = 7 ;
    if ( x == y ){
        cout << "x is equal to y" << endl ;
    }else if(3 * y == 21 ) { // runs only when the if condition is false 
        cout << "x is equal to: "<< x << endl ;
    }else {
        cout << "x is not equal to y" << endl ;
    }

    // short hand if condtition
    int age = 20 ;
    string result = (age >= 18) ? "You're eligible to vote" : "You're not eligible to vote";
    cout << result;
    
}