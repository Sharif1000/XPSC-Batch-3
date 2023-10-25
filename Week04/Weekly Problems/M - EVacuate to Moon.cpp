#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	  int n,m,h;
	  cin>>n>>m>>h;
	  int a[n], b[m];
	  for(int i = 0; i < n; i++) cin>>a[i];
	  for(int i = 0; i < m; i++) cin>>b[i];
	  sort(a, a+n, greater<int>());
	  sort(b, b+m, greater<int>());
	  
	  long long int sum = 0;
	  for(int i = 0; i < n && i < m; i++){
	    double val = static_cast<double>(b[i]) * h;
	    if(val >= a[i]) sum +=a[i];
	    else sum +=static_cast<long long int>(val);
	  }
	  cout<<sum<<endl;
	}
	return 0;
}
