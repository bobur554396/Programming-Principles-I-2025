#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show digits from given string

    input:
    He3l1l4o

    output:
    314
    */
    string s;
    cin >> s;

    // cout << s[0] << endl;
    // cout << s[s.length() - 1] << endl;
    // cout << s.length() << endl;
    for(int i = 0; i < s.length(); i++){
        int code = (int)s[i];
        if(code >= 48 && code <= 57){
            cout << s[i];
        }
    }

    

    return 0;
}