#include <iostream>

using namespace std;

int main(){
    // s.front(), s.back(
    string s1;
    // s1 = "KBTU"; // assignment operator
    s1 = "dacb"; // assignment operator

    // int a[] = {1, 2, 3};
    // sort(a, a + 3);

    sort(s1.begin(), s1.end());
    cout << s1 << endl;
    
    reverse(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}