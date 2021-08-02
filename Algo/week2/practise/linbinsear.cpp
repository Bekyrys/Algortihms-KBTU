#include <iostream>

using  namespace  std;


int binarySearch(int arr[], int l, int r, int x){
    if(r >= l){
      //  cout << "in binarySearch" << endl;
        int mid = (l + r) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int linearSearch(int arr[], int l, int r, int x){
    int res = -1;
    for(int i = l; i <= r; ++i){
       // cout << "in linearSearch" << endl;
        if(arr[i] == x){
            res = i;
            break;
        }
    }
    return res;
}


int main() {

    int arr[] = {2, 3, 4, 10, 40, 41, 55, 56, 68, 90, 100, 1000, 100000};
    
    int x;
    cin >> x;

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << linearSearch(arr, 0, n - 1, x) << endl;
    cout << binarySearch(arr, 0, n - 1, x) << endl;

    return 0;
}