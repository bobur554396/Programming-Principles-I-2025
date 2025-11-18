#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Deque - Double ended queue
        

        |R| <-  [7][2][5][3] -> |R|
    */
    deque<int> q;
    q.push_back(5);
    q.push_front(2);
    q.push_front(7);
    q.push_back(3);

    // cout << q.size() << endl;
    // cout << q.empty() << endl;
    cout << q.front() << " " << q.back() << endl;
    q.pop_front();
    q.pop_back();
    cout << q.front() << " " << q.back() << endl;
   
    return 0;
}