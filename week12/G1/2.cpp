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
    s.push(4);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    



    return 0;
}