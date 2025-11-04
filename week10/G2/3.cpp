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

    // Option 1: Using indexing
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // Option 2: Using iterator
    // int i;
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    
    // Option 3: Using auto keyword
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // Option 4: Using value based with data type specified 
    // for(int value : v){
    //     cout << value << " ";
    // }
    // cout << endl;

    // Option 5: Using value based with auto keyword
    for(auto value : v){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}