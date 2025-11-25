#include <iostream>

using namespace std;

void printArr(int *p, int n){
    for(int i = 0; i < n; i++)
        // cout << *(p + i) << " ";
        cout << p[i] << " ";
}

int main(){
    int a[3];
    int *p = a;
    *p = 3; // a[0] = 3;
    p++;
    *p = 6; // a[1] = 6;
    p++;
    *p = 9; // a[2] = 9;

    printArr(a, 3);
    

    return 0;
}