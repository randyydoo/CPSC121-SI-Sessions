#include <iostream>

double calculate(double num1, double num2, std::string operation){
    if (operation == "add"){
        return num1+num2;
    }
    else if(operation == "subtract"){
        return num1-num2; 
    }
    else if(operation == "multiply"){
        return num1*num2;
    }
    else if(operation == "divide"){
        return num1/num2;
    }
   return 0.0; 
}




int main() {
  std::string add = "add";
  std::string sub = "subtract";
  std::string multiply = "multiply";
  std::string divide = "divide";

  double num1 = 5, num2 = 4; 
  double sum = calculate(num1, num2, add);
  std::cout << "The sum of 5 and 4 is: " << sum << std::endl;
    
  double num3 = 10, num4 = 5; 
  double difference = calculate(num3,num4, sub);
  std::cout << "the difference of 10 and 5 is: " << difference << std::endl;

  double num5 = 2, num6 = 4;
  double product = calculate(num5, num6, multiply);
  std::cout << "The product of 2 and 4 is: " << product << std::endl;
    

  return 0;
}
