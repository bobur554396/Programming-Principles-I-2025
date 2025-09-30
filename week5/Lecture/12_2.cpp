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
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - ('a' - 'A'); // s[i] - 32;
        }
    }
    cout << s << endl;

    return 0;
}