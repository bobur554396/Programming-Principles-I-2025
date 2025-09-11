#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] string: number of words

    input:
    Hello, world! This is KBTU.

    output:
    5
    */
    string s;
    getline(cin, s);

    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            cnt++;
        }
    }
    cout << cnt + 1 << endl;


    

    return 0;
}