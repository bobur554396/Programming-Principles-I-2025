#include <iostream>

using namespace std;

int main(){
    // s.front(), s.back(
    string s1;
    s1 = "KBTU"; // assignment operator

    cout << s1[0] << " " << s1[s1.size() - 1] << endl;
    cout << s1.front() << " " << s1.back() << endl;
    cout << *s1.begin() << " " << *(s1.end() - 1) << endl; 

    // int a[] = {1, 2, 3};
    // cout << *a;

    return 0;
}