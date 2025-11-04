#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[3] = {4, 5, 3}; // static array with fixed size 3

    // cout << *a << endl;

    vector<int> v(a, a + 3); // initialize vector with elements of array a

    sort(v.begin(), v.end()); // sort the vector in ascending order
    reverse(v.begin(), v.end()); // reverse the vector
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}