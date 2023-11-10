#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int mx = INT_MAX;
	    int a[n];
	    for(int i = 0; i < n; i++) cin>>a[i];
	    for(int i = 0; i < n; i++){
	        if(i == 0){
	            mx = min(mx,abs(a[i] - a[i+1]));
	        }
	        else if(i == n - 1){
	            mx = min(mx,abs(a[i] - a[i-1]));
	        }
	        else{
	            int diff = max(abs(a[i] - a[i+1]), abs(a[i] - a[i-1]));
	            mx = min(diff, mx);
	        }
	    }
	    cout<<mx<<endl;
	    
	}
	return 0;
}
