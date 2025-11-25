#include <iostream>

using namespace std;

struct Student {
    string id;
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
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    // int a[n];
    Student s[n];
    for(int i = 0; i < n; i++){
        s[i].read();
    }

    for(int i = 0; i < n; i++){
        s[i].print();
    }

    


    return 0;
}