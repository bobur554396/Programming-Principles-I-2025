#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
    
    1. math expression: (2 + 4) * 3 - (5 - 1) / 2 
    2. math expression: (2 + (4 + 3) - (5 - 1) / 2) 

    ([])([]) - YES
    (([[]])()) - YES
    ((([[[[]]]]))) - YES

    (() - NO
    ()) - NO
    )() - NO
    ())( - NO
    
    ([)(]) - NO

    []
    []
    []
    [[]
    [(]
    */
    string s;
    cin >> s;

    stack<char> q;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[') 
            q.push(s[i]);

        if(s[i] == ')' || s[i] == ']') {
            if(q.empty()){
                cout << "NO" << endl;
                return 0;
            }
            
            char cur = s[i];
            char top_stack = q.top();
            
            if(cur == ')' && top_stack != '('){
                cout << "NO" << endl;
                return 0;
            }

            if(cur == ']' && top_stack != '['){
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