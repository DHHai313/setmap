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
  // Set khong the luu 2 gia tri giong nhau, cac phan tu duoc sap xep tang dan
  set<int> se;
  // them phan tu vao set
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
    cout << "Yes, tim thay\n";
  } else {
    cout << "\nNo,khong tim thay";
  }
  // ham count(), dem so luong phan tu xuat hien trong set, chi tra ve 0 hoac 1
  // =>dung de tim kiem thay cho ham find()
  if (se.count(10) == 0) {
    cout << "\nNo,khong tim thay\n";
  } else if (se.count(10) == 1) {
    cout << "Yes, tim thay";
  }

  // ham erase() trong set xoa phan tu bang GIA TRI
  cout << "\ntruoc khi xoa:\n";
  for (int x : se) {
    cout << x << " ";
  }
  se.erase(5);
  // nen kiem tra trong set co gia tri do khong roi moi xoa => neu khong Error
  if (se.find(6) != se.end()) {
    se.erase(6);
  }
  cout << "\nsau khi xoa:";
  for (int x : se) {
    cout << x << " ";
  }
  // ham erase() trong set xoa phan tu bang Iterator
  auto it2 = se.find(7);
  if (it2 != se.end()) {

    se.erase(it2);
  }

  // Iterator trong Set chi co the dich chuyen bang ++ hoac --
  // Kieu du lieu Set dang TREE(Cay) khong +=2,3,4,... duoc
  auto it3 = se.find(4);
  cout << endl << *it << endl;
  --it;
  cout << *it << endl;
}