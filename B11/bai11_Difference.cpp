#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, n;
  cin >> n >> m;
  int a[n], b[m];
  set<int> sea;
  set<int> seb;
  for (int &x : a) {
    cin >> x;
    sea.insert(x);
  }
  for (int &x : b) {
    cin >> x;
    seb.insert(x);
  }
  for (auto it = sea.begin(); it != sea.end(); it++) {
    if (!seb.count(*it)) {
      cout << *it << " ";
    }
  }
}