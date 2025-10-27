#include <iostream>

using namespace std;

int main(){
    // - [ ] accessing each element by loop
    string s = "kb^tu";

    cout << s[0] << " " << s[s.size() - 1] << endl; // by index
    cout << s.front() << " " << s.back() << endl; // using built-in function
    cout << *s.begin() << " " << *(s.end() - 1) << endl; // begin/end - are addresses

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    // sort(s.begin() + 1, s.end());

    cout << s << endl;


    // int a[] = {1, 2, 4};
    // cout << a;


    return 0;
}