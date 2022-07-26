#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void solve() {
  for (int i = 0; i < INT_MAX; i++) {
    int n;
    cin >> n;
    if (n == 42) {
      return;
    }
    cout << n << endl;
  }
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
