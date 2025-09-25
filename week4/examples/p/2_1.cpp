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
    while(n > 0){
        // cout << n % 2 << " ";
        int rem = n % 2;
        res = char(rem + 48) + res;

        n /= 2;
    }

    cout << res << endl;


    return 0;
}