#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main(){
    // fixed size arrays : 
    string cars[3] = {"CB A" , "CB B" , "CB C"};

    // dynamic size arrays (vectors) :
    vector<string> cars_again = {"Pankaj" , "Singh" , "Rawat"};

    for ( string car : cars_again){
        cout << car << " " ;
    }
    cout << endl ;

    // to add a string in the array we use :
    cars_again.push_back("Once More");

    for ( string car1 : cars_again){
        cout << car1 << endl ;
    }

}