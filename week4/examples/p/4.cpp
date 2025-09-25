#include <iostream>

using namespace std;

int main(){

    /*
    Convert from dec to hex

    17
    11 => 1 * 16^0 + 1 *16^1 = 1 + 16 = 17

    1) 17 / 16 = 1 => 1
    2) 1 / 16 = 0 => 1
    3) 
    */
    int n;
    cin >> n;

    // 1C => 12 * 16 ^ 0 + 1 * 16 ^ 1 = 12 + 16 = 28

    string values = "0123456789ABCDEF";
    string res = "";
    while(n){
        int rem = n % 16;
        res = values[rem] + res;
        n /= 16;
    }

    cout << res << endl;



    return 0;
}