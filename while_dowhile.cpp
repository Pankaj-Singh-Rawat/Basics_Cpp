#include<iostream>
using namespace std ;

int main (){
    // while is also a conditional loop which is used as :
    int x = 1 ;
    while (x <= 5){
        cout << x << endl ;
        x++ ;
    } 

    // while also has another type called do while 
    // which is used as :
    
    do { // first it runs the command given and then check the condition of while 
        cout << x << endl;
    } while ( x < 5);

    }