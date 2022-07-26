#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n + 1);
  unordered_map<int, vector<int>> mp;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    mp[v[i]].push_back(i);
  }
  sort(v.begin(), v.end());

  int i = 1, j = n;
  while (i < j) {
    int sum = v[i] + v[j];
    debug(sum);
    if (sum > x) {
      j--;
    } else if (sum < x) {
      i++;
    } else if (sum == x) {
      // TODO
      return;
    }
  }

  cout << "IMPOSSIBLE" << endl;
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
