#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    string source = "hello, it is it - kbittu";
    string target = "it";
    int found = source.find(target); // .find(target_str, start_index)
    int cnt = 0;
    while(found != -1){
        found = source.find(target, found + target.size()); // found + 1
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}