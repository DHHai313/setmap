#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  int q;
  cin >> q;
  multiset<int> mset;
  for (int i = 0; i < n; i++) {
    mset.insert(a[i]);
  }
  while (q > 0) {
    int luachon;
    cin >> luachon;
    if (luachon == 1) {
      int value;
      cin >> value;
      mset.insert(value);
    } else if (luachon == 2) {
      int value;
      cin >> value;
      auto it = mset.find(value);
      if (it != mset.end()) {
        mset.erase(it);
      }
    } else if (luachon == 3) {
      int value;
      cin >> value;
      int x = mset.count(value);
      if (x == 0) {
        cout << "NO";
      } else {
        cout << "YES";
      }
    }
  }
}