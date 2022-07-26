#include <bits/stdc++.h>
#include <iostream>
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
  int n, x, count = 0;
  cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == x) {
      count++;
    }
  }
  sort(v);

  // Two Sum
  int i = 0, j = n - 1;
  while (i < j) {
    int sum = v[i] + v[j];
    if (sum == x) {
      count++;
      i++;
      j--;
    } else if (sum < x) {
      i++;
    } else if (sum > x) {
      j--;
    }
  }

  // Three Sum

  cout << count << endl;
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
