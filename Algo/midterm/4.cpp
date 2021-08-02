# include <bits/stdc++.h>

using namespace std;
 
int main(){
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  while (q--) {
    int num;
    cin >> num;
    int left = 0, right = n - 1;
    int g = n - 1;
    while (left <= right) {
      int medium = (left + right) / 2;
      if (a[medium] >= num){
        g = medium;
        right = medium - 1;
      } 
      else left = medium + 1;
    }
    cout << a[g] << '\n';
  }
  return 0;
}