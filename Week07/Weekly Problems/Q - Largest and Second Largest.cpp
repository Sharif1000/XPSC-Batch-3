#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i < n; i++){
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    int large = a[n-1];
	    int large2;
	    for(int i = n - 2; i >=0; i--){
	        if(a[i] < large){
	            large2 = a[i];
	            break;
	        }
	    }
	    cout<<large2 + large << endl;
	}
	return 0;
}
