#include <iostream>
#include "student.h" // header files

using namespace std;

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    Student s[n];  
    for(int i = 0; i < n; i++)
        s[i].read();

    sort(s, s + n, sortByGPAAge);

    for(int i = 0; i < n; i++)
        s[i].print();
        
    return 0;
}