#include <iostream>

using namespace std;

int main(){
    // Pointer - variables which can store address of another variable
    int a = 2;
    // cout << &a << endl;

    int *p = &a; // p - is pointer of INT data type

    cout << &a << endl;
    cout << p << endl;

    cout << a << endl;
    *p = 5;
    // a = 5;
    cout << a << endl;



    return 0;
}