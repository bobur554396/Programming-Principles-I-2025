#include <iostream>

using namespace std;

int main(){
    // - [ ] size & length
    string s1;
    s1 = "KBTU"; // assignment operator

    string s2("KBTU"); // with constructor

    s2 += '!'; // append character at the end of the string

    s2 += " Welcome to C++."; // append string at the end of the string

    cout << s1 << " " << s2 << endl;
    cout << "Size of s1: " << s1.size() << endl;
    cout << "Length of s2: " << s2.length() << endl;

    return 0;
}