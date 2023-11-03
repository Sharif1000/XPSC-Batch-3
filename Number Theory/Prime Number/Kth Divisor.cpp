#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
  ll n, k; cin>>n>>k;
  set<ll>s;
  for(ll i = 1; i * i <= n; i++){
    if(n % i == 0){
      s.insert(i);
      s.insert(n/i);
    }
  }
  vector<ll>v;
  for(ll val:s) v.push_back(val);
  
  int sz = v.size();
  ll ans = -1;
  if(k <= sz){
      cout<<v[k-1];
  }
  else{
      cout<<ans;
  }
  
  return 0;
}
