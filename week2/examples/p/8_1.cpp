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

    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cout << s[i];
        }
    }

    

    return 0;
}