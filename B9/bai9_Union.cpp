#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, n;
  cin >> n >> m;
  int a[n], b[m];
  set<int> se;
  for (int &x : a) {
    cin >> x;
    se.insert(x);
  }
  for (int &x : b) {
    cin >> x;
    se.insert(x);
  }
  for (auto it = se.rbegin(); it != se.rend(); it++) {
    cout << *it << " ";
  }
}