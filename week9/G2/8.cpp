#include <iostream>

using namespace std;

int myMax2(int a, int b){
    if(a > b)
        return a;
    else 
        return b;
}

int myMax3(int a, int b){
    if(a > b)
        return a;
    return b;
}

int myMax(int a, int b){
    return (a > b) ? a : b;
}

int main() {

    cout << myMax(10, 20) << endl;
   
    
    return 0;
}

