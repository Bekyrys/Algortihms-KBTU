#include<bits/stdc++.h>
using namespace std;

int used[105];
int d[105];
vector<int> g[105];

int main(){
  int n;
  cin >> n;
  int m[n + 1][n + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; ++j) {
        cin >> m[i][j];
        if (m[i][j]) g[i].push_back(j);
    }
  }
  queue<int> q;
  int x, y;
  cin >> x >> y;
  q.push(x);
  while (q.size() > 0) {
    int v = q.front();
    if (v == y) {
      cout << d[y];
      return 0;
    }
    q.pop();
    for (int i = 0; i < g[v].size(); ++i) {
      int to = g[v][i];
      if(used[to]) continue;
      d[to] = d[v] + 1;
      used[to] = 1;
      q.push(to);
    }
  }
  
  cout << -1;
}