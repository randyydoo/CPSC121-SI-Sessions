#include <iomanip>
#include <iostream>

void calculate(double num1, double num2, double & val3, std::string operation){
    // TODO: create a function that calculates arithmitic based on your needs
    if (operation == "add")  val3 = num1+num2;
    else if (operation == "subtract") val3 = num1-num2;
    else if (operation == "divide") val3 = num1/num2;
    else val3 = num1*num2;
}




int main() {
  double meal_cost = 0.0;
  double tip_percent = 0.0;
  int number_of_guests = 0;


  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;


  std::cout << "Please input tip percent: ";
  std::cin >> tip_percent;

  std::cout << "Please input number of guests: ";
  std::cin >> number_of_guests;
   

      
  // TODO: Call function ~calculate~ to perform arithmitic
  std::string add = "add";
  std::string subtract = "subtract";
  std::string divide = "divide";
  std::string multiply = "multiply";

   

  
  return 0;
}
