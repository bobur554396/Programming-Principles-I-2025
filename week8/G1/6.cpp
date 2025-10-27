#include <iostream>

using namespace std;

int main(){
    // - [ ] comparing two strings for equality
    string s1;
    s1 = "KBTU!"; // assignment operator

    string s2("KBTU"); // with constructor

    string s3 = s1 + " " + s2;

    string s4 = "HI " + s3;

    s4 += " WELCOME!";

    s4.append(" HAVE A GREAT DAY!"); // +=

    s4.insert(4, " GREETING: ");

    cout << s4 << endl;

    

    return 0;
}