#include <iostream>
#include <vector>

using namespace std;

int main(){

    /*
    vector - a dynamic array
    1. Dynamic size
    2. Can store any data type
    3. Provides various inbuilt functions for ease of use

    vector <data_type> vector_name;
    */

    int a[3] = {4, 3, 5}; // static array with fixed size 3
    // a[3] = 1;

    // v: [4][3][5][7][-1] <- push_back

    vector<int> v;
    v.push_back(4); // add element at the end
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(-1);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}