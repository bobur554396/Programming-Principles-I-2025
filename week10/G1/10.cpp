#include <iostream>
#include <vector>

using namespace std;



int main(){
    int a[4] = {4, 5, 3, -1};
    vector<int> v(a, a + 4);

    // int b = 3;
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;





    return 0;
}