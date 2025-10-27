#include <iostream>

using namespace std;

int main(){
    // - [ ] convert char to number (ascii)
    string s1;
    s1 = "KBTU"; // assignment operator

    for(int i = 0; i < s1.size(); i++)
        cout << int(s1[i]) << " "; // type casting 
        // cout << (int)s1[i] << " "; // type casting 

    cout << endl;
    

    return 0;
}