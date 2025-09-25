#include <iostream>
#include <cmath>

using namespace std;

int main(){

    /*
    Convert from bin to dec

    0101 => 5 => 1 * 2^0 + 0 * 2^1 + 1 * 2^2 ... = 1 + 4 = 5
    1001 => 9 => 1 + 8 = 9
    */
    string s;
    cin >> s;

    int sum = 0, power = 0;
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '1'){
            sum += pow(2, power);
        }
        power++;
    }

    cout << sum << endl;

    



    return 0;
}