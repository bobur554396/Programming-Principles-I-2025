#include <iostream>

using namespace std;

int main(){
    // - [ ] comparing two strings for equality
    string s1;
    s1 = "BBTU"; // assignment operator

    string s2("ABTU"); // with constructor

    if (s1 > s2) {
        cout << "s1 is greater than s2." << endl;
    } else {
        cout << "s1 is not greater than s2." << endl;
    }

    

    return 0;
}