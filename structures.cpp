#include <iostream>
using namespace std ;

int main (){
    // structure is created usign struct :
    struct{
        int myNum ;
        string myString ;
    } myStructure ; // structure variable

    // accessing structure numbers
    myStructure.myNum = 1 ;
    myStructure.myString = "Pankaj";

    cout << myStructure.myNum << endl ;
    cout << myStructure.myString << endl;


}