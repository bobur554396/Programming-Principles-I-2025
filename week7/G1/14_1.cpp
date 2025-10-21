#include <iostream>
#include <sstream> // string stream

using namespace std;

int main(){
    string s = "Alice";
    int age = 20;
    float gpa = 3.8;
    
    stringstream ss;

    ss << s << " " << age << " " << gpa; // "Alice 20 3.8"

    string f;
    
    // ss >> f;

    getline(ss, f); // f = "Alice 20 3.8";

    cout << f << endl;





    



    return 0;
}