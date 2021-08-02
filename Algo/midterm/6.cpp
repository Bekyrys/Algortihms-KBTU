#include <bits/stdc++.h>

using namespace std;
 
int main(){
  multiset<long long> s;
  long long n, k;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    long long x;
    cin >> x;
    s.insert(x);
  }
  int cnt = 0;
  while (s.size() > 1) {
    long long a = *s.begin();
    s.erase(s.begin());
    long long b = *s.begin();
    s.erase(s.begin());
    cout << a << ' ' << b << '\n';
    if (a >= k) {
      cout << cnt << '\n';
      return 0;
    }
    s.insert(a + 2 * b);
    cnt++;
  }
  cout << *s.begin() << '\n';
  if (*s.begin() >= k) cout << cnt;
  else cout << -1;
  return 0;
}