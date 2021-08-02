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

int KMP(string s, string t) {
  string l = s + '#' + t;
  vector<int> pi = prefix_function(l);
  return pi.back();
}

int main() {
  string s, t;
  cin >> s >> t;
  int a = KMP(t, s);
  for (int i = a; i < t.size(); ++i) {
    s += t[i];
  }
  cout << s;
}