#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(1);
    s.insert(5); // Duplicate, will not be added
    
    // s.clear();
    // cout << s.empty() << endl;
    // cout << s.size() << endl;

    // for(set<int>::iterator it = s.begin(); it != s.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << *it << " ";
    // }

    for(int value : s)
        cout << value << " ";
    
    cout << endl;

    return 0;
}