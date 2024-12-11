#include <iostream>
using namespace std;

int main(){
    // using for loops in arrays
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // Loop through strings
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }

    // using for each loop in arrays
    for ( int car : cars ){
        cout << car << endl ;
    }
}