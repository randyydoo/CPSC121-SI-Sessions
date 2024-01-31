#include <iomanip>
#include <iostream>

double calculate(double num1, double num2, std::string operation){
    // TODO: create a function that calculates arithmitic based on your needs
    if (operation == "add") return num1+num2;
    else if (operation == "subtract") return num1-num2;
    else if (operation == "divide") return num1/num2;

    return num1*num2;
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

  int one_hundred = 100;
  double tip_decimal = calculate(tip_percent, one_hundred, divide);
  double tip_amt = calculate(meal_cost, tip_decimal, multiply);
  double total_meal_cost = calculate(meal_cost, tip_amt, add);
  double cost_per_person = calculate(total_meal_cost, number_of_guests, divide);
   

  
  std::cout << std::fixed << std::setprecision(2) << "\n"
            << "Subtotal: $" << meal_cost << "\n"
            << "Tip Percentage: " << tip_percent << "%\n"
            << "Tip: $" << tip_amt << "\n"
            << "Total: $" << total_meal_cost <<"\n"
            << "Price Per Person: $" << cost_per_person << "\n";

  
  return 0;
}
