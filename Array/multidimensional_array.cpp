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

    // why multidimension arrays 
    // taking an example :
    bool ships [4][4] = {
        {0 , 1 , 1 , 0 }, 
        {0 , 0 , 0 , 0 },
        {0 , 0 , 1 , 0 },
        {0 , 0 , 1 , 0 }
    };  // we put 1 to indicate there is a ship

    // initial values 
    int hits = 0 ;
    int numberofTurns = 0 ;

    while ( hits < 4 ){
        int row , column ;
        cout << "Selecting coordinates: \n";
        
        cout << "Choose a row number between 0 and 3: ";
        cin >> row ;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column ;

        if (ships[row][column]){

            ships[row][column] = 0 ;

            hits++ ;

            cout << "HIT! " << (4-hits) << " left.\n\n";
        }else {
            cout << "Miss\n\n";
        }

        numberofTurns++ ;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberofTurns << " turns" ;

}