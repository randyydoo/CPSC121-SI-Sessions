/* solution.cc */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


double divide_or_multiply(double num1, double num2, string operation){
    if(operation == "multiply"){
        return num1*num2;
    }
    else{
        return num1/num2;
    }
}



int main(){
    double challenge_num1 = 20.1623, challenge_num2 = 12.0;
    double challenge_product, challenge_quotient;

    string mul = "multiply";
    string div = "divide";

    challenge_product = divide_or_multiply(challenge_num1, challenge_num2, mul);
    challenge_quotient = divide_or_multiply(challenge_num1, challenge_num2, div);


    cout << challenge_product << endl << setprecision(4) << challenge_quotient << endl;
    
    return 0;
    

}
