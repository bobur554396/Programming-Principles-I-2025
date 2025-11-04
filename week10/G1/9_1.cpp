#include <iostream>
#include <vector>

using namespace std;


int main(){
    //     - [x] Given N and N elements 
    
    /*
    in:
    4
    5 1 3 4

    out:
    ...
    */
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;





    return 0;
}