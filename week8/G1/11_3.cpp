#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    string s = "Hello it is KBTU";
    string t = "it is";
    int found = s.find(t);

    if(found != -1) { // string::npos == -1
        cout << t << " - is found: " << found;
    } else {
        cout << t << " - is not found";
    }

    cout << endl;



    return 0;
}