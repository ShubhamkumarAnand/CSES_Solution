#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1;
  }
  if (n < 4) {
    cout << "NO SOLUTION" << endl;
  }
  for (int i = 2; i <= n; i += 2) {
    cout << i << " ";
  }
  for (int i = 1; i <= n; i += 2) {
    cout << i << " ";
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
