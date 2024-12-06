#include <iostream>
using namespace std ;

int main (){
    // a switch expressition is use when we have to select one of many code blocks

    int day = 11 ;

    switch (day){
        case 1:
        cout << "day 1" ;
        break;
        case 2:
        cout << "day 2" ;
        break;
        case 3:
        cout << "day 3" ;
        break;
        case 4:
        cout << "day 4" ; 
        break;
        case 5:
        cout << "day 5" ;
        break;
        case 6:
        cout << "day 6" ;
        break;
        case 7:
        cout << "day 7" ;
        break;

        default:
        cout << "wrong input";
        break;

    }
}