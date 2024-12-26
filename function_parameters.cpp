#include <iostream>
using namespace std ;

void functionName(string name){
        cout << name << endl ;
    }

    //default parameter
void defaultFunctions(string country = "INDIA"){
    cout << country << endl;
}

int main(){
    functionName("Pankaj");
    functionName("Singh");
    functionName("Rawat");

    defaultFunctions("Russia");
    defaultFunctions("Nepal");
    defaultFunctions("China");
}

