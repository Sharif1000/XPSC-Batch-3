#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
	  ll n; cin>>n;
	  vector<ll>v;
	  for(ll i = 1; i * i <= n; i++){
	    if(n % i == 0){
	      v.push_back(i);
	      if((n / i) != i) v.push_back(n/i);
	    }
	  }
	  sort(v.begin(), v.end());
	  //count the number of divisor
	  int sz = v.size();
	  cout<<sz<<endl;
	  //print all divisors
	  for(ll val:v) cout<<val<<" ";
	  cout<<endl;
	}
	return 0;
}
