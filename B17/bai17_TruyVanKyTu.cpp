#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  map<char, int> mp;
  for (char c : s) {
    if (mp.find(c) == mp.end()) {
      mp[c] = 1;
    } else {
      mp[c]++;
    }
  }
  int max = 0;
  char imax;
  int min = 25;
  char imin;
  for (pair<char, int> it : mp) {
    if (it.second > max) {
      max = it.second;
      imax = it.first;
    }
    if (it.second <= min) {
      min = it.second;
      imin = it.first;
    }
  }
  cout << imax << " " << max << endl;
  cout << imin << " " << min << endl;
  cout << mp.size();
  //   for (auto it : mp) {
  //     if(it.first==imax){
  //         cout<<(*it).first<<" "<<(*it).second<<endl;
  //     }
  //     if(it.first==imin){
  //         cout<<(*it).first<<" "<<(*it).second<<endl;
  //     }
  //   }
}