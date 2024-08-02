#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore(); // Bỏ qua ký tự newline sau khi nhập n
  map<string, string> mp;

  for (int i = 0; i < n; ++i) {
    string maSinhVien;
    string hoTen;
    cin >> maSinhVien;
    cin.ignore(); // Bỏ qua ký tự newline sau khi nhập mã sinh viên
    getline(cin, hoTen);
    mp[maSinhVien] = hoTen;
  }

  int q;
  cin >> q;
  cin.ignore(); // Bỏ qua ký tự newline sau khi nhập q

  for (int i = 0; i < q; ++i) {
    string kt;
    cin >> kt;

    if (mp.find(kt) != mp.end()) {
      cout << mp[kt] << endl;
    } else {
      cout << "NOT FOUND" << endl;
    }
  }

  return 0;
}
