#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;


bool cmp(const pair<string, int>& p1, const pair<string, int>& p2){
  if(p1.second > p2.second)
    return true;
  return false;
}


int main(){
    map<string, int> m;
    m["25B444"] = 13;
    m["25B222"] = 15;
    m["25B111"] = 14;
    m["25B333"] = 13;

    vector< pair<string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for(vector< pair<string, int> >::iterator it = v.begin(); it != v.end(); it++){
      cout << it->first << " => " << it->second << endl;
    }
    

    return 0;
}