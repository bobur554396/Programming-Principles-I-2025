#include <iostream>

using namespace std;

int main(){
    // int b[] = {1, 2, 3};
    // cout << b << endl;

    // Pointer - is variable which can store address of another variable
    int a = 2;
    // cout << &a << endl;
    int *p = &a; // pointer "p" 

    cout << &a << endl;
    cout << p << endl;

    cout << a << endl;
    *p = 5;
    cout << a << endl;





    return 0;
}