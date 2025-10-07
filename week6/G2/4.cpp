#include <iostream>

using namespace std;

int main() {
    // - [ ] Nested loop
    int n = 4, m = 3, o = 2;
    for(int i = 0; i < n; i++) {
        cout << "Outer loop iteration: " << i << endl;
        
        for(int j = 0; j < m; j++) {
            cout << "  Inner loop iteration: " << j << endl;

            for(int k = 0; k < o; k++) {
                cout << "    Innermost loop iteration: " << k << endl;
            }
        }
    }

    return 0;
}