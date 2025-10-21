#include <iostream>

using namespace std;

int main(){
    // - [ ] given two string show YES if the second is found in the first one NO otherwise
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

    if(cnt) // !cnt => cnt == some number, but not 0 => cnt == true
        cout << "YES\n";
    else
        cout << "NO\n";




    return 0;
}