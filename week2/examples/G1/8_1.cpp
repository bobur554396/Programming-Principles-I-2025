#include <iostream>
#include <string>

using namespace std;

int main() {
    int score;
    cin >> score;

    
    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score < 0 || score > 100) {
        cout << "Invalid score" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}