#include <iostream>
using namespace std ;

int main(){
    // as we know now that c++ returns strings within double quotes , so we cannot pass double quotes twice in an string as it will generate an error ;
    // for eg
    // string txt = "My name is "Pankaj""; // this will definietly generate an error;

    // solution to this is using Escape characters ;
    // Escape character     Result	                Description
    // \'	                '	                    Single quote
    // \"	                "	                    Double quote
    // \\	                \                       Backslash

    // example 
    string one = "Hey I'm \"one\".";
    cout << one << endl ;
    string two = "Hey I'm \'two\'.";
    cout << two << endl ;
    string three = "Hey I'm \\three\\.";
    cout << three << endl ;

    // we also have some special character in use like :

    // Escape Character	Result	
    // \n	                New Line	
    // \t                  Tab 
}