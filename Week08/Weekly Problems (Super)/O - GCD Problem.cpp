#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  ll t; cin>>t;
  while(t--){
    ll n; cin>>n;
    for(ll i = 1; i <= n; i++){
      ll b = n - i - 1;
      if(i != 1 && b != 1 && __gcd(i,b) == 1){
        cout<<i<<" "<<b<<" "<<1<<endl;
        break;
      }
    }
  }
  return 0;
}
