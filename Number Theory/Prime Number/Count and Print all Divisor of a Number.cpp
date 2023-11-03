#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
	  ll n; cin>>n;
	  set<ll>s;
	  for(ll i = 1; i * i <= n; i++){
	    if(n % i == 0){
	      s.insert(i);
	      s.insert(n/i);
	    }
	  }
	  //count the number of divisor
	  int sz = s.size();
	  cout<<sz<<endl;
	  //print all divisors
	  for(ll val:s) cout<<val<<" ";
	  cout<<endl;
	}
	return 0;
}
