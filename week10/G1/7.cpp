#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[3] = {4, 5, 3}; // static array with fixed size 3
    vector<int> v(a, a + 3); // initialize vector with elements of array a

    // v.erase(v.begin()); // remove first element
    // v.erase(v.begin() + 1); // remove first element
    v.erase(v.begin(), v.begin() + 2); // remove first two elements
    
    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}