#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

#define sort(x) sort(x.begin(), x.end());
#define desc(x) sort(x.begin(), x.end(), greater<int>{});

void solve() {
  string str;
  cin >> str;
  int n = str.size();
  cout << str[n - 2] << endl;
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
