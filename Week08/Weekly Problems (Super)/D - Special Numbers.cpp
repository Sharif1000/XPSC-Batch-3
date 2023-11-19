#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

int main() 
{
  int t; cin>>t;
  while(t--){
    ll n,k; cin>>n>>k;
    ll i = 1;
    ll ans = 0;
    while(k){
      if(k % 2 !=0){
        ans = (ans + i) % mod;
      }
      i = (i * n) % mod;
      k /=2;
    }
    cout<<ans<<endl;
  }
  return 0;
}
