#include <iostream>

using namespace std;

int main(){

    /*
    Convert from dec to bin

    5
    0101

    1) 5 / 2 = 2 => 1
    2) 2 / 2 = 1 => 0
    3) 1 / 2 = 0 => 1
    */
    int n;
    cin >> n;

    string res = "";
    while(n){ // (n > 0){
        int rem = n % 2; // 1 / 0
        // res += char(rem + 48); // option 1
        // res = res + ('0' + rem); // option 2
        res = char('0' + rem) + res; // option 2
        // cout << rem << " ";
        n /= 2;
    }

    cout << res << endl;



    return 0;
}