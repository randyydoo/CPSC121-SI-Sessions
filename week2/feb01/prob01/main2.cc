#include <iostream>

using namespace std;

void printing_memory_adresses(int &num1, int &num2){
    cout << &num1 << endl << &num2 << endl;
}

int main(){
    int a = 1;
    int b = 3;
    
    cout << &a << endl << &b << endl;
    return 0;

}
