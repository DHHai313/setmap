#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  set<string> se;
  int dem = 0;
  while (cin >> s) {
    se.insert(s);
    dem++;
  }
  cout << se.size() << endl;
  cout << *se.begin() << " " << *se.rbegin();
}