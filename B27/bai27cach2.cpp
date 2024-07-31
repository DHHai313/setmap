#include <bits/stdc++.h>
using namespace std;
/*[Set Map]. Bài 27. Thi đấu
Cho thông tin các trận đấu của giải bóng đá Sunday League, nhiệm vụ của bạn là
đối với mỗi đội bóng hãy liệt kê các đối thủ đã từng chạm trán. Danh sách các
đội bóng được liệt kê theo thứ tự từ điển tăng dần và danh sách đối thủ của từng
đội bóng cũng được liệt kê tăng dần theo thứ tự từ điển. Gợi ý : Dùng
map(string, vector(string)) mp; mỗi đội bóng sẽ dùng 1 vector để lưu lại danh
sách các đối thủ trong các trận bóng, sort danh sách đội bóng trước khi in ra
kết quả.
*/
int tim(string s, char x) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == x) {
      return i;
    }
  }
  return 0;
}
int main() {
  int n;
  cin >> n;
  cin.ignore();
  map<string, multiset<string>> mp;
  for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    int pos = tim(s, '-');
    string t1 = s.substr(0, pos - 1);
    string t2 = s.substr(pos + 2);
    mp[t1].insert(t2);
    mp[t2].insert(t1);
  }
  for (auto it : mp) {
    cout << it.first << " : ";
    int i = 0;
    for (string s : it.second) {
      cout << s;
      if (i < it.second.size() - 1) {
        cout << ", ";
        i++;
      }
    }
    cout << endl;
  }
}