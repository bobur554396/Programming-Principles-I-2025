#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        math:  (2 + 4) * 5 + (3 * 6)
    
        ()() -- YES
        (()) -- YES
        ()()() -- YES

        )() -- NO
        ()) -- NO
        (() -- NO
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
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    




    return 0;
}