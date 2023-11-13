#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    double res = n * 1.0 * 0.9;
	    if((k * 1.0) > res) cout<<"ONLINE"<<endl;
	    else if((k * 1.0) < res) cout<<"DINING"<<endl;
	    else cout<<"EITHER"<<endl;
	}
	return 0;
}
