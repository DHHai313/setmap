#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  // them phan tu vao set
  set<int> se;
  for (int x : a) {
    se.insert(x);
  }
  // dem so luong phan tu trong set
  cout << se.size() << endl;
  // duyet set bang for each
  for (int x : se) {
    cout << x << " ";
  }
  cout << endl;
  // duyet set bang iterator theo thu tu tang dan
  for (set<int>::iterator it = se.begin(); it != se.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  // duyet set bang auto theo thu tu giam dan
  for (auto it = se.rbegin(); it != se.rend(); it++) {
    cout << *it << " ";
  }
  // ham find() tim phan tu trong set
  // auto it = se.find(7);
  auto it = se.find(10);
  if (it != se.end()) {
    cout << "Yes, tim thay";
  } else {
    cout << "No,khong tim thay";
  }
  // ham count(), dem so luong phan tu xuat hien trong set, chi tra ve 0 hoac 1
  // =>dung de tim kiem thay cho ham find()
  if (se.count(10) == 0) {
    cout << "No,khong tim thay";
  } else if (se.count(10) == 1) {
    cout << "Yes, tim thay";
  }
}