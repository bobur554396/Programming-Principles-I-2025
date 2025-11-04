#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[3] = {4, 5, 3}; // static array with fixed size 3
    vector<int> v(a, a + 3); // initialize vector with elements of array a

    v.clear(); // clear all elements from the vector
    cout << v.empty() << endl; // check if vector is empty
    
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;





    return 0;
}