#include <iostream>

using namespace std;


void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = a;
}




int main(){
    int a = 1;
    int b = 3;
    
    swap(a, b);
    cout << a << endl << b << endl;

    return 0;



}
