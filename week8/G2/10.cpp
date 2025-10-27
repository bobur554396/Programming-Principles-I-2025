#include <iostream>

using namespace std;

int main(){
    //- [x] substr(index, cnt), erase(index, cnt)
    string s = "hello, it is it - kbtu";

    // substr => sub string
    // string s2 = s.substr(2, 3);
    // string s2 = s.substr(2);

    // s.erase(0, 2);
    // s.erase(2, 3);
    s.erase(2);

    cout << s << endl; // << s2 << endl;

    return 0;
}