#include <iostream>
using namespace std ;
int main(){

    // enumerated terms : specially listed terms in the code 
    enum Level {
        LOW, // 0
        MEDIUM, // 1
        HIGH // 2
    };

    // // assigning a value to enum 
    enum Level myVar = MEDIUM ;

    // printing the value
    cout << myVar << endl ;

    // changing values of enums
    enum Num {
        NUM1 = 21, // 21 : if a value is assigned to a variable then the other values will have incrementing numbers assigned
        NUM2, // 22
        NUM3 // 23
    };

    enum Num newNum = NUM2 ;
    cout << newNum << endl ;

}