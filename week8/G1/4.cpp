#include <iostream>

using namespace std;

int main(){
    // - [ ] size & length
    string s1;
    s1 = "KBTU"; // assignment operator

    string s2("KBTU"); // with constructor

    string s3(s2); // copy constructor
    string s4 = s2; // copy assignment

    return 0;
}