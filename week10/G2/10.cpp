#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
    /*
    Map - key-value pairs
      Keys   - Values
    [25B111]   [14]
    [25B222]   [15]
    [25B333]   [10]
    [25B444]   [13]
    */
    map<string, int> m;
    m["25B444"] = 13;
    m["25B222"] = 15;
    m["25B111"] = 14;
    m["25B333"] = 13;
    m["25B444"] = 15; // Update value for key "25B444"

    pair<string, int> p = make_pair("25B555", 12);
    // pair<string, int> p = {"25B000", 12};

    // cout << p.first << " => " << p.second << endl;

    m.insert(p);


    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
        // cout << it->first << " => " << it->second << endl;
        cout << (*it).first << " => " << (*it).second << endl;
    }
    

    return 0;
}