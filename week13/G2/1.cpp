#include <iostream>

using namespace std;

int main(){
    // Pointer - variables which can store address of another variable
    // int a = 2;
    // cout << &a << endl;

    int a[] = {1, 2, 3};

    cout << *(a + 1) << endl;
    cout << a[2] << endl; // *(a + 2)

    return 0;
}