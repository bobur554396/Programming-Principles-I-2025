#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show digits from given string

    input:
    H3ell4o

    output:
    34
    */
    string s;
    cin >> s;

    // cout << s[0] << endl; // H
    // cout << s[s.length() - 1] << endl; // o
    // cout << s.length() << endl;
    for(int i = 0; i < s.length(); i++){
        // cout << (int)s[i] << " "; // char
        int code = (int)s[i];
        if(code >= 48 && code <= 57){
            cout << (char)code;
        }
    }

    cout << endl;
    

    return 0;
}