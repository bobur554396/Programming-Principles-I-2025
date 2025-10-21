#include <iostream>

using namespace std;

int main(){
    // - [x] substr(index, cnt)
    string s = "Hello it is it KBTU";

    // string s2 = s.substr(2, 3); // sub string
    // string s2 = s.substr(2); // sub string
    // cout << s2 << endl;

    // - [ ] erase(start_index, count)
    // s.erase(2, 3);
    s.erase(2);
    cout << s << endl;




    return 0;
}