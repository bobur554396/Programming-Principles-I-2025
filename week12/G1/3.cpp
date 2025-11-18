#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
        Queue - horizontal box


        [R] <- [4][2][8][][][][][] <- new elements
    */

    queue<int> q;
    q.push(4);
    q.push(2);
    q.push(8);

    cout << q.empty() << endl;
    cout << q.size() << endl;

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    cout << q.back() << endl;







    return 0;
}