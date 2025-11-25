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

bool sortByGPA(Student s1, Student s2){
    return s1.gpa > s2.gpa;
    // if(s1.gpa > s2.gpa)
    //     return true;
    // return false;
}


bool sortByGPAAge(Student s1, Student s2){
    if(s1.gpa == s2.gpa){
        return s1.age > s2.age;
    }
    return s1.gpa > s2.gpa;
}

void filterByGPA(Student *s, int n, float gpa){
    for(int i = 0; i < n; i++){
        if(s[i].gpa >= gpa)
            s[i].print();
    }
}

void findMaxGPA(Student *s, int n){
    float maxGPA = s[0].gpa;
    for(int i = 0; i < n; i++){
        if(s[i].gpa > maxGPA)
            maxGPA = s[i].gpa;
    }

    for(int i = 0; i < n; i++){
        if(s[i].gpa == maxGPA)
            s[i].print();
    }    

    
}