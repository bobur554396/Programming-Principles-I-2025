#include <iostream>
#include <map>

using namespace std;

int main(){
    /*
    in:
    hello

    out:
    h 1
    e 1 
    l 2
    o 1
    */
    string s;
    cin >> s;
    
    map<char, int> m;
    for(char c = 'a'; c <= 'z'; c++)
        m[c] = 0;

    for(int i = 0; i < s.size(); i++)
        m[s[i]]++;

    for(int i = 0; i < s.size(); i++)
        cout << s[i] << " " << m[s[i]] << endl;

    // for(map<char, int>::iterator it = m.begin(); it != m.end(); it++){
    //     if(it->second) // if(it->second > 0)
    //         cout << it->first << " => " << it->second << endl;
    // }
        


    return 0;
}