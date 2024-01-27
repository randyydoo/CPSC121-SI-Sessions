/* solution.cc */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int multiply(int num1, int num2){
    return num1*num2;
}

double divide(double num1, double num2){
    return num1/num2; 
}

double divide_or_multiply(double num1, double num2, string operation){
    if(operation == "multiply"){
        return num1*num2;
    }
    else{
        return num1/num2;
    }
}

int main(){
    int val1 = 326, val2 = 400;
    unsigned int product;
    /* TODO: call the multiply function and assign the value to the variable ~product~ */
    product = multiply(val1, val2);
    cout << product << endl;

    double val3 = 31, val4 = 16;
    double quotient;
    /* TODO: call the divide function and assign the value to the variable ~quotient~ */
    quotient = divide(val3, val4);
    cout << setprecision(4) << quotient << endl;
    


    /* CHALLENGE TODO: fill in divide_or_multiply function and compute following */
    double challenge_num1 = 20.1623, challenge_num2 = 12.0;
    double challenge_product, challenge_quotient;

    string mul = "multiply";
    string div = "divide";
    challenge_product = divide_or_multiply(challenge_num1, challenge_num2, mul);
    challenge_quotient = divide_or_multiply(challenge_num1, challenge_num2, div);


    cout << challenge_product << endl << setprecision(4) << challenge_quotient << endl;
    
    return 0;
    

}
