#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a[] = {1, 3, 7, 2, 1, 7, 9, 7};

  // Multiset co the luu nhieu phan tu co gia tri giong nhau, cac gia tri duoc
  // sap xep tang dan
  multiset<int> mset;

  for (int x : a) {
    mset.insert(x);
  }
  for (int x : mset) {
    cout << x << " ";
  }
  // Hàm find: Vì multiset có thể chứa nhiều phần tử giống nhau nên hàm find sẽ
  // trả về iterator đến vị trí đầu tiên của phần tử có giá trị cần tìm kiếm.
  auto it = mset.find(1);
  cout << endl << *it << endl;
  it++;
  cout << endl << *it << endl;
  it++;
  cout << endl << *it << endl;

  // Hàm count() trong MULTISET trả về số lượng của giá trị
  // Thay Vì 0 hoặc 1 như SET
  cout << mset.count(1) << endl;
  cout << mset.count(7) << endl;
  /*
Hàm erase: Khi sử dụng hàm erase nếu bạn xóa bằng giá trị multiset sẽ xóa hết
mọi phần tử có cùng giá trị bị xóa, vì thế nếu muốn 1 phần tử bạn phải xóa bằng
iterator*/
  mset.erase(7);
  cout << "mang sau khi xoa ko dung iterator";
  for (int x : mset) {
    cout << x << " ";
  }
  cout << "\nmang sau khi xoa  dung iterator";
  auto it2 = mset.find(1);
  mset.erase(it2);
  for (int x : mset) {
    cout << x << " ";
  }
}