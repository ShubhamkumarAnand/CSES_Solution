#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
  ll n;
  cin >> n;

  vector<ll> v;
  v.push_back(n);

  while (n != 1) {
    if (n % 2 == 1) {
      n = (n * 3) + 1;
    } else {
      n /= 2;
    }
    v.push_back(n);
  }

  for (auto i : v) {
    cout << i << " ";
  }
  return 0;
}
