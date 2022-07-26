#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
  string str;
  cin >> str;
  map<char, int> mp;
  int maxCount = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == str[i + 1]) {
      mp[str[i]]++;
      if (mp[str[i]] > maxCount) {
        maxCount = mp[str[i]];
      }
    } else {
      mp[str[i]] = 0;
    }
  }
  cout << maxCount << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
