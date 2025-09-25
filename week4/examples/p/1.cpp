#include <iostream>

using namespace std;

int main(){

    /*
    Cout number of 1's from given bin value.

    in:
    "0101" => '0'  '1'  '0'   '1'

    out:
    2

    0111
    3
    */
    int s; 
    cin >> s; // "0101"

    // cout << s << endl << s.length() << endl;
    // s[0]
    // s[s.length() - 1]
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        // cout << s[i] << "\n"; // s[i] => '0' or '1'
        if(s[i] == '1')
            cnt++;
    }

    cout << cnt << endl;



    return 0;
}