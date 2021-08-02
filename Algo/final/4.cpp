# include <bits/stdc++.h>
 
using namespace std;

const int N = 2e5 + 5;
int n, m;
int a[N], sum[N];

int binarySearch(int x) {
  int left = 1, right = n, index = n;
  while (left <= right) {
    int med = (left + right) / 2;
    if (sum[med] >= x) {
      index = med;
      right = med - 1;
    }
    else left = med + 1;
  }
  return index;
}

int main(){
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i - 1] + a[i];
  }
  while (m--) {
    int x;
    cin >> x;
    cout << binarySearch(x) << '\n';
  }
 
  return 0;
}