#include <iostream>
#include <map>

using namespace std;


// int arr[26]; // option 1

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

    // option 2
    int arr[26]; 
    for(int i = 0; i < 26; i++)
        arr[i] = 0;
    
    /*
            a  b  c  d  e  f  g ...
    arr => [ ][ ][ ][ ][ ][ ][ ]...
    */
    for(int i = 0; i < s.size(); i++){
        int curIndex = s[i] - 'a';
        arr[curIndex]++;
    }

    for(int i = 0; i < s.size(); i++){
        int curIndex = s[i] - 'a';
        cout << s[i] << " " << arr[curIndex] << endl;
    }


    // for(int i = 0; i < 26; i++)
    //     cout << char('a' + i) << " => " << arr[i] << endl;
    

        


    return 0;
}