#include <iostream>

using namespace std;

int main(){
    // - [x] accessing each element by loop
    string s1;
    s1 = "KBTU"; // assignment operator

    // cout << s1[0] << " " << s1[s1.size() - 1] << endl;

    for(int i = 0; i < s1.size(); i++)
        cout << s1[i] << " "; // data type of s1[i] - is "char"
    

    return 0;
}