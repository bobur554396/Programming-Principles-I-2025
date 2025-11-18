#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
    
    1. math expression: (2 + 4) * 3 - (5 - 1) / 2 
    2. math expression: (2 + (4 + 3) - (5 - 1) / 2) 

    ()() - YES
    (()()) - YES
    ((())) - YES

    (() - NO
    ()) - NO
    )() - NO
    ())( - NO

    
    (()()) - YES

    []
    []
    []
    []
    [(]
    */
    string s;
    cin >> s;

    stack<char> q;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') 
            q.push(s[i]);

        if(s[i] == ')') {
            if(q.empty()){
                cout << "NO" << endl;
                return 0;
            }
            q.pop();
        }
    }

    if(q.empty())
        cout << "YES\n";
    else
        cout << "NO\n";

    
   
    return 0;
}