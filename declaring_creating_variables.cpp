#include <iostream>
using namespace std; 

int main(){
    // type     variablename = value ;
    // for eg;

    int num = 29 ;
    cout << num << endl;

    // OR 

    int num2 ; // just declared the variable name without giving it a value
    num2 = 30 ; // now that variable is used to declare a value later on !
    cout << num2 << endl;

    // what if we reassign the value of num2 ? , let's see !
    num2 = 92;
    cout << num2 << endl;

    // we can also input different data types , like 
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    // and use them later on in the code!

    int sum = num + num2; //sum of 92 + 29
    cout << sum << endl;

    // you can do arithmatic operations here like this also


    // declaring many variables of same type
    int x = 5 , y = 6 , z = 50;
    cout << x + y + z << endl;

    // we can also reassign values like this
    x = y = z = 50;
    cout << x + y + z << endl;

}