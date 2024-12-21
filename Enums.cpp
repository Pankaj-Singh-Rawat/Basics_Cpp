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

    // Enum in a switch statements
    enum Bevel {
        VALUE1 = 1, // first value is 50 ;
        VALUE2,
        VALUE3
    };

    enum Bevel anotherNewNum = VALUE3;

    switch (anotherNewNum){
        case 1:
            cout << "Initial value" << endl ;
            break ;
        case 2:
            cout << "Middle value" << endl ;
            break ;
        case 3:
            cout << "Final value" << endl ;
            break;

    }

    return 0 ;

}