#include <iostream>
using namespace std;

int main (){

    // we can use getline() function also
    string secondName ;
    getline(cin , secondName);
    cout << "Your second name is : " << secondName << endl;

    // how to input string from user ;
    string firstName ;
    cout << "Enter you first name : " ;
    cin >> firstName ;
    cout << "Your first name is : " << firstName << endl;

}