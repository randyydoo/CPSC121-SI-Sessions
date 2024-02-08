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

  double tip_amt = 0.0;
  double num3 = 0.0; 

  double tip_decimal = tip_percent/100;
  calculate(meal_cost, tip_decimal, num3, multiply);
  std::cout << num3;
  calculate(meal_cost, tip_decimal, tip_amt, multiply);
  std::cout << tip_amt;
  /* double total_meal_cost = calculate(meal_cost, tip_amt, add); */
  /* double cost_per_person = calculate(total_meal_cost, number_of_guests, divide); */
   

  
  return 0;
}
