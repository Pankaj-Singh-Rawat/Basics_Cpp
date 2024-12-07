#include <iostream>
using namespace std;

int main(){
    // when you exactly know how many times you want to use loop , for loop is used 
    for(int i = 1 ; i <= 10 ; i += 2){
        cout << i << endl ;
    }

    // we can also use nested loops like :
    for(int rows = 0 ; rows <= 2 ; rows++){
        cout << "Row: " << rows << endl ;
        for (int col = 0 ; col <= 10 ; col++){
            cout << "Column: " << col << endl ;
        }
    }

    // for each : this type of loop is used in cases where we are working with arrays:
    int myNumers[5] = {1 , 2 , 3, 4 ,5 };
    for (int each : myNumers){
        cout << each << endl ;
    }
    
}