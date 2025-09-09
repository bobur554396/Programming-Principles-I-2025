#include <iostream>

using namespace std;

int main() {

    /*
        Pre increment: ++a; --a;
        Post increment: a++; a--;
    */
    int a = 3;
    // a++;
    // ++a;
    // int b = a++;
    int b = ++a;

    int c = a++ + ++a - --a + a-- + a; // find value

    cout << a << " " << b << endl;


    return 0;
}

