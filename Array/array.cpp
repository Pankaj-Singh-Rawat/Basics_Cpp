#include <iostream>
using namespace std ;

int main (){
    // declaring an array is : 
    string cars[4] = {"Volvo" , "BMW" , "Ford" , "Mazda"};
    int myNum[3] = {10 , 20 , 30};

    cout << cars[0] << endl;
    
    // if we redeclare a name or number at any index then the original array will also change accordingly
    cars[0] = "Pagani";
    cout << cars[0] << endl;
}