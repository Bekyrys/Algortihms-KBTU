# include <bits/stdc++.h>

using namespace std;
 
int main(){
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  
  while (q--) {
    int x;
    cin >> x;
    int it = lower_bound(arr.begin(), arr.end(), x) - arr.begin(); 

    cout << arr[it] << '\n';
  }
  return 0;
}