#include <iostream>

using namespace std;

int main() {
    // - [ ] Nested loop 
    int n = 4;
    int m = 3;
    int o = 2;
    for(int i = 0; i < n; i++){
        cout << "i: " << i << endl;
        for(int j = 0; j < m; j++){
            cout << "    j: " << j << endl;
            for(int k = 0; k < o; k++){
                cout << "        k: " << k << endl;
                // while(){}
            }
        }
    }

    return 0;
}