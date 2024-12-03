#include <iostream>
#include <cmath> // it is important to import cmath library to use math functions
using namespace std;

int main (){

    // we can use maths function like this also :
    int num1 ;
    int num2 ;
    cout << "enter 1st number:" << endl;
    cin >> num1;

    cout << "enter 2nd number:" << endl;
    cin >> num2;

    cout << "maximum number from both of them is: " << endl;
    cout << max(num1 , num2) << endl;

    // there are many sucn use cases of maths library :
    // like:
    cout << sqrt(num1) << endl; // returns the square root of num1
    cout << round(2.6) << endl; // will round off the number 2.6 to 3 
    cout << log(num1) << endl; // returns the log value 

}