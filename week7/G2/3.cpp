#include <iostream>

using namespace std;

int main(){
    string s2("hello"); // give initial value using constructor

    string s3(s2); // "hello"

    string s4 = s2; // "hello"

    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    return 0;
}