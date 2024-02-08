#include <iostream>

double yards_to_inches_reference(int &yds){
    yds = 36*yds; 
    return 0;
}

double yards_to_inches_value(int yds){
    std::cout << "Memory adress of yards from yards_to_inches_()" << &yds;
    yds = 36*yds; 
    return 0;
}
