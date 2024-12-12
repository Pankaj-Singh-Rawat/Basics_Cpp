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
}