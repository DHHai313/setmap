#include <bits/stdc++.h>
using namespace std;
int main() {
  // map la 1 cap (key,value)
  map<int, int> mp;
  // ham insert() them 1 cap gia tri trong map
  mp.insert({1, 2});
  mp.insert({2, 5});
  mp.insert({3, 2});
  mp.insert({4, 9});
  mp.insert({3, 5});
  // key khong duoc trung nhau,neu trung thi ko them duoc
  // them gia tri bang map[] = value; neu trung key da co roi => thay doi value
  mp[5] = 10;
  cout << mp.size() << endl;
  cout << mp[1] << endl; // cout value cua key 1
  cout << mp[2] << endl;
  cout << mp[3] << endl;
  cout << mp[4] << endl;
  cout << mp[5] << endl;
  // duyet map bang foreach
  for (pair<int, int> map : mp) {
    cout << map.first << " " << map.second << endl;
  }
  // duyet bang iterator
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << (*it).first << " " << (*it).second << endl;
    cout << it->first << " " << it->second << endl;
  }
}