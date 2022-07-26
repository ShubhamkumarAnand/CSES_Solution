#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using i64 = long long;

#ifdef DEBUG
#include "algo/debug.h"
#else
#define debug(...)
#endif

bool isPrime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n, m;
  cin >> n >> m;
  for (int i = (n > 1 ? n : 2); i <= m; i++) {
    if (isPrime(i)) {
      cout << i << endl;
    }
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
