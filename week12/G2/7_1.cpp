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
    ())( - NO - wrong, returned "YES"
    */
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt1++;
        if(s[i] == ')') cnt2++;
    }

    // cout << cnt1 << " " << cnt2 << endl;
    if(cnt1 == cnt2)
        cout << "YES\n";
    else
        cout << "NO\n";

    
   
    return 0;
}