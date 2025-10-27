#include <iostream>

using namespace std;

int main(){
    // - [x] comparing two strings for equality

    // char a = 'a'; // 97
    // char b = 'b'; // 98

    // if((int)a > (int)b)
    //     cout << a << endl;
    // else  
    //     cout << b << endl;

    string s2 = "bbtu";
    string s3 = "bbte"; 

    // lexicographic comparison

    if(s2 > s3)
        cout << s2 << endl;
    else 
        cout << s3 << endl;

    return 0;
}