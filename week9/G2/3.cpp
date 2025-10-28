#include <iostream>
// #include <cctype> // optional
using namespace std;

int main() {
    char ch = 'a';
    cout << isdigit(ch) << endl;  // 1 (true) [0-9]
    cout << isalpha(ch) << endl;  // 0 (false) [a-zA-Z]
    cout << isalnum(ch) << endl;  // 1 (digit or letter) [0-9a-zA-Z]
    cout << ispunct('!') << endl; // 1 (punctuation)

    return 0;
}