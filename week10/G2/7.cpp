#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*
    in:
    4
    3 1 5 -1

    out:
    -1 1 3 4 5
    */

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        // int x;
        // cin >> x;
        // v.push_back(x);
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;  

    return 0;
}