#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties/attributes
    string name;
    int age;
    float gpa;
};

int main(){
    int a;
    a = 2;
    
    Student s;
    s.id = "25B001";
    s.name = "Student1";
    s.age = 20;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;

    return 0;
}