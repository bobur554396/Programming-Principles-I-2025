#include <iostream>
#include <sstream> // string stream

using namespace std;

int main(){
    // stringstream
    /*
    in:
    "Alice 18 3.8"

    out:
    Alice. 19 3.9 
    */
    string s = "Alice      18      3.8";

    stringstream ss(s);

    string name;
    int age;
    float gpa;

    ss >> name >> age >> gpa;
    
    cout << name << ". " << age + 1 << "  " << gpa + 0.1 << endl;
    

    return 0;
}