#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    string s = "Hello it is KBTU";
    
    // s.find('e'); // string::npos
    if(s.find('e') != string::npos) { // string::npos == -1
        cout << "e - is found";
    } else {
        cout << "e - is not found";
    }

    cout << endl;



    return 0;
}