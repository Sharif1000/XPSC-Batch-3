#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a[4];
	    int mx = INT_MIN;
	    int sum = 0;
	    for(int i = 0; i < 4; i++){
	        cin>>a[i];
	        mx = max(a[i],mx);
	        sum +=a[i];
	    }
	    sum -=mx;
	    if(mx > sum) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
