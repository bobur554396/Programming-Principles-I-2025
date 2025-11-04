#include <iostream>
#include <vector>

using namespace std;


// Comparator function to sort
bool cmp(int a, int b){
    if(a < b) 
        return true;
    return false;
}

bool cmp2(int a, int b){
    if(a > b) 
        return true;
    return false;
}


int main(){
    int a[4] = {4, 5, 3, -1};
    vector<int> v(a, a + 4);

    sort(v.begin(), v.end(), cmp2); // sort the vector in ascending order


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}