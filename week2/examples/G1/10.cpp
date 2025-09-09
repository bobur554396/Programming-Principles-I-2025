#include <iostream>
#include <string>

using namespace std;

int main() {
    string text = "Programming";
    cout << text.length() << endl;    // 11 (length of string)
    cout << text.substr(0, 4) << endl; // "Prog" (substring)

    return 0;
}