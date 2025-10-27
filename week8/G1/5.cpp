#include <iostream>

using namespace std;

int main(){
    // - [ ] comparing two strings for equality
    string s1;
    s1 = "KBTU!"; // assignment operator

    string s2("KBTU"); // with constructor

    if (s1 == s2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    

    return 0;
}