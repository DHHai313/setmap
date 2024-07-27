#include <bits/stdc++.h>
using namespace std;

/*[Set Map]. Bài 2. Truy vấn phần tử trong mảng.
Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem
phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3
cách : Set, Map, Binary Search.*/
int main() {
  int n, q;
  cout << "nhap n:";
  cin >> n;
  int a[n];
  int b[q];
  cout << "\nnhap mang n phan tu\n";
  for (int &x : a) {
    cin >> x;
  }
  set<int> se;
  for (int x : a) {
    se.insert(x);
  }
  cout << "nhap q:\n";
  cin >> q;
  cout << "nhap gia tri cua q:\n";
  for (int i = 0; i < q; i++) {

    cin >> b[i];
  }
  cout << "outpuT:\n";
  for (int i = 0; i < q; i++) {
    if (se.count(b[i]) == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}