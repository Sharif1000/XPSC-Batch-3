#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n, k; cin>>n>>k;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int val;
    vector<int>pos;
    vector<int>neg;
    for(int i = 0; i < n; i++){
      if(a[i] > 0) pos.push_back(a[i]);
      if(a[i] < 0){
        val = a[i];
        val *= (-1);
        neg.push_back(val);
      }
    }
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end(), greater<int>());
    
    ll ans = 0;
    int mx = INT_MIN;
    
    if(pos.size()){
      mx = max(mx, pos[0]);
      for(int i = 0; i < pos.size(); i += k) ans += pos[i] * 2;
    }
    if(neg.size()){
      mx = max(mx, neg[0]);
      for(int i = 0; i < neg.size(); i += k) ans += neg[i] * 2;
    }
    ans -= mx;
    if(pos.size() == 0 && neg.size() == 0) cout<<0<<endl;
    else cout<<ans<<endl;
  }
  return 0;
}
