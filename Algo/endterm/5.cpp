//D
#include <bits/stdc++.h>
using namespace std;

const int N = 100100;
vector<int> g[N], order;
bool used[N];
int n, m;

void dfs(int v) {
  used[v] = true;
  
}


int main() {
  cin >> n >> m;
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
  }
  dfs(1);
  reverse(order.begin(), order.end());
  for (int i : order) cout << i << ' ';
}