#include <iostream>
using namespace std ;

int main(){
    // multidimension arrays have more than 1 Dimension and are used as :

    // string letters[2][5]; // first block represents rows and second lock representss columns
    string letters[2][5] = {
        {"A", "B", "C", "D", "E"},
        {"E", "F", "G", "H", "I"}
    };
    cout << letters[1][1] << endl; // accessing characters in multidimension array

    //changing characters in multidimension array
    letters[0][0] = "Z";

    cout << letters[0][0] << endl ;

    // looping through multidimensional arrays:
    for(int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            cout << letters[i][j] << endl;
        }
    }
}