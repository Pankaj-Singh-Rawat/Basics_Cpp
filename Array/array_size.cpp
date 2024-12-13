#include <iostream>
using namespace std ;

int main(){
    // to get the size of an array you can use siezof()
    int myNum [5] = {10 , 20 , 30 , 40 , 50};
    cout << sizeof(myNum) << endl; // gives a binary number in response

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength << endl;

    // loop through an array using sizeof:
    for (int i = 0 ; i < sizeof(myNum) / sizeof(myNum[0]) ; i++ ){
        cout << myNum[i] << "\n" ;
    }

    // using for each :
    for ( int i : myNum ){
        cout << i << "\n" ;
    }

}