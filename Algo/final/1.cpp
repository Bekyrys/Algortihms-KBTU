# include <bits/stdc++.h>
 
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    int x = max(x1, x2);
    int y = max(y1, y2);
    a[i] = max(x, y);
  }
  sort(a.begin(), a.end());
  m--;
  cout << a[m];
}