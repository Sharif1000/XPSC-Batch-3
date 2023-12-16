#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int a[4];
    for(int i = 0; i < 4; i++) cin>>a[i];
    int ans = a[0];
    int mn = min(a[1], a[2]);
    int mx = max(a[1], a[2]);
    ans = ans + 2 * mn;
    mx = mx - mn;
    ans = ans + min(a[0] + 1, mx+a[3]);
    if(a[0] == 0){
      if(a[1] > 0 || a[2] > 0 || a[3] > 0)  cout<<1<<endl;
      else cout<<0<<endl;
    }
    else{
      cout<<ans<<endl;
    }
  }
  return 0;
}
