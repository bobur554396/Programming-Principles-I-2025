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

    vector<int> v(a, a + 3); // initialize vector with elements of array a


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}