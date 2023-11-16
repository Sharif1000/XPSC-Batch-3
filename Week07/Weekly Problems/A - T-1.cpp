#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
	ll n,a,b,p,q;
	cin>>n>>a>>b>>p>>q;
	ll sum = 0;
	sum +=(n / a) * p;
	sum +=(n / b) * q;
	ll same = n / ((a / (__gcd(a,b))) * b);
	sum -= same * (min(p,q));
	cout<<sum;
	return 0;
}
