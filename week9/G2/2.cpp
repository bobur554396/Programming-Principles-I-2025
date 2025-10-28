#include <iostream>
// #include <cctype> // optional
using namespace std;

int main() {
    char c = 'A';
    cout << (char)tolower(c) << endl;   // 'a'
    cout << (char)toupper(c) << endl;   // 'A'

    char d = 'b';
    cout << (char)toupper(d) << endl;   // 'B'
    return 0;
}