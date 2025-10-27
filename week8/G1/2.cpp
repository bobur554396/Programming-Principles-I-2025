#include <iostream>

using namespace std;

int main(){
    // - [x] Initialize string (with constructor)
    string s1;
    s1 = "KBTU"; // assignment operator

    string s2("KBTU"); // with constructor

    string s3(s2); // copy constructor



    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    

    return 0;
}