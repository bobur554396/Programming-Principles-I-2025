#include <iostream>
#include <stack>

using namespace std;

int main(){

    /*
        Stack - LIFO => Last In First Out
        Stack - is vertical box.


        []
        [7]
        [2]
        [4]
    */

    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(7);

    cout << s.size() << endl;
    cout << s.empty() << endl;

    cout << s.top() << endl; // show/returing the top element
    s.pop(); // delete top element
    cout << s.size() << endl;
    



    return 0;
}