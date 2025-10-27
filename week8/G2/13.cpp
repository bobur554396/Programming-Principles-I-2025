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
    // string name = "Alice";
    // int age = 18;
    // float gpa = 3.8;
    string name;
    int age;
    float gpa;

    cin >> name >> age >> gpa;

    string line; // expecting value: "Alice 18 3.8"

    stringstream ss;
    ss << name << " " << age << " " << gpa; // "Alice 18 3.8"

    getline(ss, line);

    cout << line << endl;
    

    return 0;
}