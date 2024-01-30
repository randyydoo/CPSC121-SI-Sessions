#include <iomanip>
#include <iostream>

void calculate(double num1, double num2, double &val3, std::string operation){
    // TODO: create a function that calculates arithmitic and changes variable val3 passed in as a reference
    
    
    
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
   

      
  // TODO: Call function ~calculate~ to 
  std::string add = "add";
  std::string subtract = "subtract";
  std::string divide = "divide";
  std::string multiply = "multiply";

  double meal_total = 0.0;
  double tip_total = 0.0;
  double price_per_person = 0.0;


  std::cout << std::fixed << std::setprecision(2)
            << "Subtotal: " << meal_cost << "\n"
            << "Tip percent: " << tip_percent << "%\n"
            << "Tip: " << tip_total << "\n" 
            << "----------------------------------------\n"
            << "Total: " << meal_total
            << "----------------------------------------\n"
            << "Price per person: " << price_per_person << "\n";

  
  return 0;
}
