#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
using namespace std;
typedef long long ll;
int main()
{
  ll n;
  cin >> n;

  vector<ll> v;

  for (int i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());
  return 0;
}
