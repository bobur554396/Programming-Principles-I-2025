#include <iostream>

using namespace std;

int main() {
    int a[3] = {5, 2, 4};

    for(int x : a){
        cout << x << " ";
    }

    // for(int i = 0; i < 3; i++) {
    //     cout << a[i] << " ";
    // }


    return 0;
}