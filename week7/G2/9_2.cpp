#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    string source = "hello, it is - kbtu";
    char target = 'i';

    // source.find(target); // index of target if it is exists, -1/string::npos otherwise
    int found = source.find(target);
    if(found != -1)
        cout << "found: " << found << endl;
    else
        cout << "not found\n";

    return 0;
}