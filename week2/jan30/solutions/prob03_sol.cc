#include <iostream>
#include <vector>


int main(){
    int sum = 0;
    std::vector<int> vect = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < vect.size(); i++){
        sum += vect[i];
    }

    return sum;


}
