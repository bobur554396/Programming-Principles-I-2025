#include <iostream>

using namespace std;

int main(){
    int a[3];
    int *p = a;
    *p = 3; // a[0] = 3;
    p++;
    *p = 6; // a[1] = 6;
    p++;
    *p = 9; // a[2] = 9;

    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";


    return 0;
}