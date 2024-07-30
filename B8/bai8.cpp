#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int q;
  cin >> q;
  multiset<int> mset;
  for (int x : a) {
    mset.insert(x);
  }
  while (q > 0) {
    int thaotac;
    cin >> thaotac;
    if (thaotac == 1) {
      int x;
      cin >> x;
      mset.insert(x);
    } else if (thaotac == 2) {
      int x;
      cin >> x;
      auto it = mset.find(x);
      if (x == *it) {
        mset.erase(x);
      }

    } else if (thaotac == 3) {
      auto kq3 = mset.begin();
      cout << "Phan tu nho nhat trong mang: " << *kq3 << endl;

    } else if (thaotac == 4) {
      auto kq4 = mset.rbegin();
      cout << "Phan tu lon nhat trong mang: " << *kq4 << endl;
    }
    q--;
  }
}