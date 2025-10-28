#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

    float a = sqrt(9); // buit-in function

    int b[] = {2, 5, 1};

    sort(b, b + 3);
    reverse(b, b + 3);

    for (int i = 0; i < 3; i++) 
        cout << b[i] << " ";
    
    cout << endl;    
    

    return 0;
}