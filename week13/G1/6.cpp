#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties/attrubutes
    string name;
    int age;
    float gpa;

    void read(){
        cin >> id >> name >> age >> gpa;
    }

    void print(){
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }
};

int main(){
    Student s;
    s.read();
    s.print();


    // cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;


    return 0;
}