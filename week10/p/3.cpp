#include <iostream>
#include <map>

using namespace std;


void showMap(map<string, float> m){
    for(map<string, float>::iterator it = m.begin(); it != m.end(); it++){
        cout << it->first << " => " << it->second << endl;
    }
}

pair<string, float> findMaxScoreStudent(map<string, float> m){
    // int max = a[0];
    pair<string, float> maxScoreStudent(m.begin()->first, m.begin()->second);
    for(map<string, float>::iterator it = m.begin(); it != m.end(); it++){
        if(it->second > maxScoreStudent.second){
            maxScoreStudent = *it;
        }
    }
    return maxScoreStudent;
}

int main(){
    /*
    in:
    4
    25B333 13.5
    25B111 12.1
    25B222 15
    25B444 10

    out:
    25B222 15
    */
    freopen("in.txt", "r", stdin);

    int n;
    cin >> n;
    map<string, float> m;
    for(int i = 0; i < n; i++){
        string studentId;
        float score;
        cin >> studentId >> score;
        m[studentId] = score;
    }

    pair<string, float> student = findMaxScoreStudent(m);
    
    cout << student.first << " => " << student.second << endl;

    // showMap(m);

    


    return 0;
}