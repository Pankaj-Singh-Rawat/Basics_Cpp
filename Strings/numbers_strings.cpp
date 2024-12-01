#include <iostream>
using namespace std ;

int main(){

    int x = 10 ; 
    int y = 20 ;
    int z = x + y ;

    cout << z << endl ;

// addition of numbers through strings ;

    string a = "10";
    string b = "20";
    string c = a + b ; // adding strings : z = 1020 "binary addition"

    cout << c << endl ;

// addition of a number in string and a number - an error will occur then;

    string p = "10";
    int q = 20 ;
    // string r = p + q ;

}