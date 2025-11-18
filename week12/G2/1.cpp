#include <iostream>
#include <stack>

using namespace std;

int main(){
    /*
        Stack - vertical box/container
        Rule -> LIFO => Last In First Out
        

        []
        []
        [7]
        [2]
        [5]
    */
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(7);

    cout << s.size() << endl;
    cout << s.empty() << endl;
    cout << s.top() << endl; // show top element from the stack
    s.pop(); // delete top element from stack
    cout << s.size() << endl;



    return 0;
}