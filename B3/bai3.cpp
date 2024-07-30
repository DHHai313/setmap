#include <bits/stdc++.h>
using namespace std;

/*[Set Map]. Bài 3. Phần tử riêng biệt.
Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy
theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.
Gợi ý : Dùng set để lưu các phần tử đã được in ra trước đó,
gặp phần tử a[i] thì kiểm tra nhanh trong set có giá trị a[i] chưa để in ra
8
1 2 3 2 1 3 4 8
1 2 3 4 8
*/
int main() {
  int n;
  cout << "nhap n:";
  cin >> n;
  int a[n];

  set<int> se;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << a[0] << " ";
  for (int i = 1; i < n; i++) {
    se.insert(a[0]);
    auto it = se.find(a[i]);
    if (it == se.end()) {
      cout << a[i] << " ";
      se.insert(a[i]);
    }
  }
}