#include <iostream>

using namespace std;

int main(){
    // - [ ] accessing each element by loop

    string s = "kbtu is !great";

    // cout << s[0] << " " << s[s.size() - 1] << endl;
    for(int i = 0; i < s.size(); i++)
        cout << (int) s[i] << " ";
        // cout << s[i] << " "; // s[i] - is data type of "char"



    return 0;
}