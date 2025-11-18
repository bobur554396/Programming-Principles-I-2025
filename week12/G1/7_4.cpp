#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        math:  (2 + 4) * 5 + (3 * 6)
    
        ([])() -- YES
        [(())] -- YES
        ([])([[]])() -- YES

        ([)(]) -- NO
        ([]]) -- NO
        (()] -- NO
        ()]] -- NO


        ([]]) - NO
        
        []
        []
        []
        []
        []
        [(]
    */
    string s;
    cin >> s;

    stack<char> box;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '['){
            box.push(s[i]);
        }
        if(s[i] == ')' || s[i] == ']'){
            if(box.empty()){
                cout << "NO" << endl;
                return 0;
            }
            
            char cur = s[i];
            char top_stack = box.top();

            if(cur == ')' && top_stack != '('){
                cout << "NO" << endl;
                return 0;
            }

            if(cur == ']' && top_stack != '['){
                cout << "NO" << endl;
                return 0;
            }
            box.pop();
        }
    }
    
    if(box.empty())
        cout << "YES\n";
    else
        cout << "NO" << endl;


    




    return 0;
}