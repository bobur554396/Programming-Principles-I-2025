#include <iostream>
#include <sstream> // string stream

using namespace std;

int main(){
    stringstream ss("Alice 20 3.8");

    string s;
    int age;
    float gpa;

    ss >> s >> age >> gpa;

    cout << s << " " << age + 1 << " " << gpa + 0.1 << endl;




    return 0;
}