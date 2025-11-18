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

    while(!q.empty()){
        cout << q.back() << " ";
        q.pop_back();
    }
   
    return 0;
}