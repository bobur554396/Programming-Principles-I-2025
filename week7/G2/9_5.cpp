#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    /*
    in:
    hello, itrr is itrr - kbittu
    itrr
    */

    string source, target;
    getline(cin, source); // read first line of input and store it inside the "source"
    getline(cin, target);

    int found = source.find(target); // .find(target_str, start_index)
    int cnt = 0;
    // for( ;found != -1; ){
        // found = source.find(target, found + target.size()); // found + 1
        // cnt++;
    // }
    while(found != -1){
        found = source.find(target, found + target.size()); // found + 1
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}