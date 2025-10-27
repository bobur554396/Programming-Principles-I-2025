#include <iostream>

using namespace std;

int main(){
    // - [ ] find function
    /*
    in:
    Hello it is it KBTU
    it is
    */
    string s, t;
    getline(cin, s);
    getline(cin, t);

    // cout << s << "\n" << t << endl;

    int found = s.find(t, 0);
    int cnt = 0;
    while(found != -1){
        found = s.find(t, found + t.size());
        cnt++;
    }

    cout << cnt << endl;




    return 0;
}