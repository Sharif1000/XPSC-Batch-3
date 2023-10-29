#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int x; cin>>x;
    int l = 0; 
    int r = n - 1;
    int ans = -1;
    while(l <= r){
      int mid = l + (r - l) / 2;
      if(a[mid] == x){
        ans = mid;
        l = mid + 1;
      }
      else if(a[mid] > x) r = mid - 1;
      else l = mid + 1;
    }
    cout<<ans;
    return 0;
}
