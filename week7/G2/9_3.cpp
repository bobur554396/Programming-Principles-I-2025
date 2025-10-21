#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    string source = "hello, it is - kbtu";
    string target = "it";

    int found = source.find(target);
    if(found != -1)
        cout << "found: " << found << endl;
    else
        cout << "not found\n";

    return 0;
}