#include <iostream>

using namespace std;


void printArr(int *a, int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << " "; // *(a + 0)

    cout << endl;
}

int main(){
    int a[3];
    int *p = a;
    *p = 2; // a[0] = 2;
    p++;
    *p = 7; // a[1] = 7;
    p++;
    *p = 10; // a[2] = 10;

    printArr(a, 3);


    return 0;
}