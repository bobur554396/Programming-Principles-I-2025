#include <iostream>

using namespace std;

int main(){
    // - [x] comparing two strings for equality
    string s2("hello"); // give initial value using constructor

    string s3(s2); // "hello"

    // string s4 = s2 + " " + s3;
    
    // s3 += '!'; // '!' - is char
    // s3 += " kbtu"; // " kbtu" - is string
    // s3.append(" kbtu"); // adding string to the end of original string
    s3.insert(2, "kbtu "); // inserting data into some index position

    cout << s2 << " " << s3 << endl;
    
    if(s2 == s3)
        cout << "yes\n";
    else 
        cout << "no\n";

    return 0;
}