#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
        Queue - horizontal box/container
        Rule -> FIFO => First In First Out
        

        |R| <-  [5][2][7][][][] <- new elements adding
    */
    queue<int> q;
    q.push(5);
    q.push(2);
    q.push(7);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
   
    return 0;
}