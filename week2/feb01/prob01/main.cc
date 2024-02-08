#include <iostream>

using namespace std;


void swap(int &a, int &b){
    b = a;
}



int main(){
    int a = 1;
    int b = 3;

    cout << "Before function call: " << "A: " << a << " B: " << b << endl;
    // a = 1,    b = 3
    swap(b, a);

    cout << "After function call: " << "A: " << a << " B: " << b << endl;
    // a = 1,    b = 1

    return 0;



}
