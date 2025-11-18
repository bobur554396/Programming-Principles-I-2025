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
    */
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt++;
        if(s[i] == ')') {
            cnt--;
            if(cnt < 0){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(!cnt) //(cnt == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    
   
    return 0;
}