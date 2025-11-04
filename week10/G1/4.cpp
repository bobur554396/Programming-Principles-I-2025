#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a[3] = {4, 3, 5}; // static array with fixed size 3

    // cout << *a << endl;

    vector<int> v(a, a + 3); // initialize vector with elements of array a

    v.insert(v.begin() + 1, 7); // insert 7 at index 1

    cout << v[0] << " " << v[v.size() - 1] << endl; // getting first element by index
    cout << v.at(0) << " " << v.at(v.size() - 1) << endl; // getting second element by at function
    cout << v.front() << " " << v.back() << endl; // getting first and last element using front and back functions
    cout << *v.begin() << " " << *(v.end() - 1) << endl; // getting address of first element

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}