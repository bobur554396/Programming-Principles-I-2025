#include <iostream>

using namespace std;

int main(){
    int a[3];
    int *p = a;
    *p = 2; // a[0] = 2;
    p++;
    *p = 7; // a[1] = 7;
    p++;
    *p = 10; // a[2] = 10;

    for(int i = 0; i < 3; i++)
        cout << a[i] << " ";

    cout << endl;


    return 0;
}