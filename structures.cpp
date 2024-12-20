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

    // using one structure in multiple variables 
    struct{
        int myNum ;
        string myString ;
    } mystruct1 , mystruct2 , mystruct3 ; // multiple structure variales seperated with commas 

    struct {
        string brand ;
        string model ;
        int year ;
    } myCar1 , myCar2 ;

    myCar1.brand = "BMW";
    myCar1.model = "M5 Competition";
    myCar1.year = 2023 ;

    myCar2.brand = "Mustang";
    myCar2.model = "GT";
    myCar2.year = 2021;
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl ; 
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl ; 

    //named structures
    struct myDataType{
        int myNum ;
        string mystring;
    };

    myDataType details;
    details.myNum = 22;
    details.mystring = "Pankaj";

    myDataType details2 ;
    details2.myNum = 20 ;
    details2.mystring = "Pankaj";

    cout << "age: " << details.myNum << " Name: " << details.mystring << endl ;
    cout << "age: " << details2.myNum << " Name: " << details2.mystring << endl ;
    
}