#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    int q; cin>>q;
    int cnt = 0;
    while(n > 0 && q > 0){
      cnt++;
      cout<<"CASE# "<<cnt<<":"<<endl;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a, a+n);
    while(q--){
    int x; cin>>x;
    int l = 0; 
    int r = n - 1;
    int ans = -1;
    while(l <= r){
      int mid = l + (r - l) / 2;
      if(a[mid] == x){
        ans = mid + 1;
        r = mid - 1;
      }
      else if(a[mid] > x) r = mid - 1;
      else l = mid + 1;
    }
    if(ans != -1){
      cout<<x<<" found at "<<ans<<endl;
    }
    else{
      cout<<x<<" not found"<<endl;
    }
    }
    cin>>n>>q;
    }
    return 0;
}
