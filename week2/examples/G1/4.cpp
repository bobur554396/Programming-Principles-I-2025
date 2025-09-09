#include <iostream>

using namespace std;

int main() {
    // - [x] (++, --,)

    /*
    
    Pre increment; ++a;
    Post increment; a++;

    Pre decrement; --a;
    Post decrement; a--;
    */

    int a = 2;
    // ++a; // a = a + 1; a += 1;
    // a++; // a = a + 1; a += 1;

    // int b = a++;
    // int b = ++a;

    int c = a++ + ++a - --a + a-- + a;

    cout << a << " " << b << " " << c << endl;


    return 0;
}