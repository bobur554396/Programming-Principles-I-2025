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

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}