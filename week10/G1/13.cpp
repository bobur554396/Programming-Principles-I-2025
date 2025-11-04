#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main(){
    /*
    Map - a collection of key-value pairs
    Key    Value
    [apple][5]
    [banana][3]
    [orange][4]
    */
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 3;
    m["orange"] = 4;
    // cout << m["banana"] << endl; // access value by key

    pair<string, int> p = make_pair("grape", 7);
    m.insert(p); // insert key-value pair into map

    cout << m.size() << endl; // number of key-value pairs




    return 0;
}