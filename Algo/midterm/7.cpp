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
    int l = 0, r = n - 1, ans = n -1;
    while (l <= r)
    {
      int m = l + r >> 1;
      if(arr[m] >= x){
        ans = m;
        r = m -1;
      }
      else l = m +1;
    }
    cout  << arr[ans] << "\n";
  }
  return 0;
}