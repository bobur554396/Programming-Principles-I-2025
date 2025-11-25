#include <iostream>

using namespace std;


int main(){
    int a[3] = {3, 8, 2};

    // for(int i = 0; i < 3; i++)
    //     cout << a[i] << " ";

    // for(set<int>::iterator it = s.begin(); it != s.end(); it++)
    //     cout << *it << " ";

    for(int *p = a; p != (a + 3); p++)
        cout << *p << " ";



    return 0;
}