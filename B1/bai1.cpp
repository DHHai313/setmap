#include <bits/stdc++.h>
using namespace std;

/*[Set Map]. Bài 1. Phần tử phân biệt
Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử
phân biệt? Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.
*/
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  set<int> se;
  for (int i = 0; i < n; i++) {
    se.insert(a[i]);
  }
  cout << se.size();
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp.insert({a[i], 1});
  }
  cout << endl << mp.size();
}