#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main(){
    set<int> s;

    // [3][4][5][][] 

    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(4);


    // s.clear();
    // cout << s.empty() << endl;
    // cout << s.size() << endl;
    
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;
    
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;




    return 0;
}