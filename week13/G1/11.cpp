#include <iostream>
#include "student.h" // header files

using namespace std;

int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++){
        students[i].read();
    }
    float gpa;
    cin >> gpa;

    filterByGPA(students, n, gpa);


    


    return 0;
}