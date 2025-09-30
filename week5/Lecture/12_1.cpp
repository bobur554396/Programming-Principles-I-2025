#include <iostream>

using namespace std;

int main() {
    /*
        - [ ] convert all letter to UPPER

        in:
        Hello

        out:
        HELLO
    */
    string s; // string is an array of characters
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        // cout << (int)s[i] << " "; // each s[i] is data type = char
        int code = (int)s[i];
        if(code >= 97 && code <= 122){
            code = code - 32;
        }
        cout << (char)code;
    }
    cout << endl;

    return 0;
}