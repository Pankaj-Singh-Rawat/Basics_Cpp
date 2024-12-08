#include <iostream>
using namespace std ;

int main (){

    // break : when used break out of any loop or condition
    for ( int i = 0 ; i <= 10 ; i++ ){
        
        if( i == 4){
            break;
        }

        cout << "break: "<< i << endl ;

    }

    // continue : used to skip the part where it is used 
    for ( int i = 0 ; i <= 10 ; i++ ){

        if( i == 4){
            continue;
        }

        cout << "continue: "<< i << endl ;

    }
    
}