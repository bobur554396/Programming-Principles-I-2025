#include <iostream>

using namespace std;


char toUpper(char c){
    if(c >= 'a' && c <= 'z'){
        c -= 32;
    }
    return c;
}

bool isDigit1(char c){
    if(c >= '0' && c <= '9')
        return true;
    return false;
}
bool isDigit(char c){
    return c >= '0' && c <= '9';
}


int main() {
    /*
    HelLo

    HELLO
    */
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] = toUpper(s[i]);
    }

    cout << s << endl;

    return 0;
}