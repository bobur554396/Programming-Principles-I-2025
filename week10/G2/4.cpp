#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a[4] = {4, 3, 5, -1}; // fixed array of size 4

    vector<int> v(a, a + 4);
    v.push_back(22); // adding an element at the end
   
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    

    return 0;
}