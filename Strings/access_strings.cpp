#include <iostream>
using namespace std;

int main (){
    
    // accessing index in the length of string;

    string myString = "Pankaj";
    cout << myString[0] << endl; // prints the value of string at index 0 i.e. P

    // changing a paritcular character at any index:

    myString[0] = '!';
    cout << myString << endl;

    // the at() function

    cout << myString.at(1) << endl ; // prints the character at index 1
    cout << myString.at(2) << endl; // prints the character at index 2

    // we can also access string in backwor form such as :

    cout << myString[myString.length() - 2];


    }