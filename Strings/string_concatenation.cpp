#include <iostream>
using namespace std ;

int main(){

    // concatenation : adding two strings via '+' operator is called concatenation

    string firstName = "Pankaj";
    string middleName = "Singh";
    string lastName = "Rawat";

    string fullName = firstName + " " + middleName + " " + lastName ; //here + is use do join two string with spaces using ->" "
    cout << fullName << endl;

    // A funcion called append can also be used to add up two strings such as :

    // string fullName2 = firstName.append(middleName); // now the firstname = "PankajSingh" istead of "Pankaj"
    // cout << fullName2 <<endl ;

    // or nested(functions inside a function) functions can also be used such as :

    string fullname3 = firstName.append(middleName.append(lastName)); // middleName is added with last name and then last name is added with the firstname;
    cout << firstName << endl;

    

}