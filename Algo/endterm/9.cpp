#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
  int n = (int)s.length();
  vector<int> pi (n);
  for (int i = 1; i < n; i++) {
    int j = pi[i - 1];
    while (j > 0 && s[i] != s[j])
      j = pi[j - 1];
    if (s[i] == s[j]) j++;
    pi[i] = j;
  }
  return pi;
}

int main() {
  string s, t;
  cin >> s >> t;
  string a1 = s + '#' + t;
  string a2 = t + '#' + s;
  vector<int> a = prefix_function(a1); // 6
  vector<int> b = prefix_function(a2); // 5
  cout << max(a.back(), b.back());
}