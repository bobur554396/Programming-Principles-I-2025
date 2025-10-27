#include <iostream>

using namespace std;

int main(){
    // - [x] comparing two strings for equality

    string s2 = "kbtu";
    string s3 = "site";

    if(s2.size() > s3.size())
        cout << "yes\n";
    else 
        cout << "no\n";

    return 0;
}