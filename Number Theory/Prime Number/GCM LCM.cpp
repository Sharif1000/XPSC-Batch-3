#include<bits/stdc++.h>
using  namespace  std;
#define ll long long

int main()
{
	int a, b;
	cin>>a>>b;
	int GCD = __gcd(a,b);
	int LCM = (a / GCD) * b;
	cout<<GCD<<" "<<LCM;
	return 0;
}
