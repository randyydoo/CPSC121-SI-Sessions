#include <iostream>

#include "convert.h"


// call the function from convert to convert yards to inches
int main(){

    int yards = 2; 

    yards_to_inches_value(yards);
    std::cout << "Passing by value:" << yards;
    std::cout << "Memory adress of yards from int main()" <<&yards;

    /* yards_to_inches_reference(yards); */
    /* std::cout << "Passing by Reference: "; */
    /* std::cout << "Yards = " << yards; */

    return 0;

}
