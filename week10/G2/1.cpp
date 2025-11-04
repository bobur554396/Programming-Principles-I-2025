#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a[4] = {4, 3, 5, -1}; // fixed array of size 4
    // a[5] = 22; // Out of range of fixed array write

    // [4][3][5][-1][]
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(-1);

    // v.clear(); // clears the vector
    cout << v.empty() << endl; // prints 0 (false)
    cout << v.size() << endl; // prints 4

    return 0;
}