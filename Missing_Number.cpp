#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n - 1; i++) {
    cin >> v[i];
  }
  int missingNumber = ((n * (n + 1)) / 2) - accumulate(v.begin(), v.end(), 0);
  cout << missingNumber << endl;
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
