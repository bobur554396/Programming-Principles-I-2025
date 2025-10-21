#include <iostream>

using namespace std;

int main(){
    string s; // define variable
    s = "KBTU"; // store value

    string s2("hello"); // give initial value using constructor

    string s3(s2);

    cout << s << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    return 0;
}