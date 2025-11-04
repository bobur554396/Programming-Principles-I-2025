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

    cout << v[0] << " " << v[v.size() - 1]<< endl;
    cout << v.at(0) << " " << v.at(v.size() - 1)<< endl;
    cout << v.front() << " " << v.back()<< endl;
    cout << *v.begin() << " " << *(v.end() - 1)<< endl;
    

    return 0;
}