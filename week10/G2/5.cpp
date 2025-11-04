#include <iostream>
#include <vector>

using namespace std;

// Comparator function to sort
bool cmp2(int a, int b){
    if(a < b)
        return true;
    return false;
}

bool cmp1(int a, int b){
    if(a > b)
        return true;
    return false;
}

int main(){

    int a[4] = {4, 3, 5, -1}; // fixed array of size 4
    vector<int> v(a, a + 4);

    sort(v.begin(), v.end(), cmp1); 


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    

    return 0;
}