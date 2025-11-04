#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a[4] = {4, 3, 5, -1};
    vector<int> v(a, a + 4);

    v.insert(v.begin() + 1, 22); // {4, 3, 5, -1} => {4, 22, 3, 5, -1}

    cout << "Before erase: " << v.size() << endl;
    // v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 3); 
    cout << "After erase: " << v.size() << endl;


    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;  

    return 0;
}