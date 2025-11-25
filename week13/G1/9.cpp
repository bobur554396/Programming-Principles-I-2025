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

bool sortByGPA(Student s1, Student s2){
    return s1.gpa > s2.gpa;
    // if(s1.gpa > s2.gpa)
    //     return true;
    // return false;
}


int main(){
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    // int a[n];
    Student students[n];
    for(int i = 0; i < n; i++){
        students[i].read();
    }

    sort(students, students + n, sortByGPA);

    for(int i = 0; i < n; i++){
        students[i].print();
    }

    


    return 0;
}