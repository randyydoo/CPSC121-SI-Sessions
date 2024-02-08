#include <iostream>


// file name = prob01.cc
// g++ -o run prob01.cc 
// ./run


// g++ -o main main.cc
// ./main

int main(){
    for (int i = 1; i <= 10; i++){

        if (i % 2 == 0){ 
            std::cout << i;
        }

    }

    int j = 1;
    while (j  < 11){
        
        std::cout << j << std::endl;
        j++;

    }

    int k = 0;
    do{
        k++;
        std::cout << k << std::endl;
    }while (k < 11);

    
    return 0;
}

