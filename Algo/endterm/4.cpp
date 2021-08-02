#include <bits/stdc++.h>
using namespace std;

vector<int> g[100001], ans;
bool used[100001];
int n, m;

void dfs(int v) {
  used[v] = 1;
  for (int i = 0; i < g[v].size(); ++i) {
    int to = g[v][i];
    if (!used[to])
      dfs(to);
  }
  ans.push_back(v);
}

void topsort() {
  for (int i = 1; i <= n; ++i) {
    if (!used[i]) dfs(i);
  }
  reverse(ans.begin(), ans.end());
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
  }
  topsort();
  for (int i = 0; i < n; ++i) cout << ans[i] << ' ';
  return 0;
}