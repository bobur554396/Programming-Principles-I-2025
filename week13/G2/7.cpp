#include <iostream>

using namespace std;

struct Student {
    string id; // fields/properties/attributes
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
    int a;
    Student s;
    s.read();
    s.print();

    return 0;
}