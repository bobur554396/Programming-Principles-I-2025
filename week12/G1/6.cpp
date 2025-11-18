#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    /*
        Dequeue - Double ended queue


        [R] <- add/remove -> [9][2][4][6][] <- add/remove elements -> [R]
    */
    deque<int> q;
    q.push_back(4);
    q.push_front(2);
    q.push_back(6);
    q.push_front(9);

    while(!q.empty()){
        cout << q.back() << " ";
        q.pop_back();
    }






    return 0;
}