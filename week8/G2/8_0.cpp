#include <iostream>

using namespace std;

int main(){
    int a[] = {1, 2, 4};
    cout << *(a + 0) << endl; // a[0]
    cout << *(a + 1) << endl; // a[1]
    cout << *(a + 2) << endl; // a[2]

    sort(a, a + 3);
    reverse(a, a + 3);


    return 0;
}