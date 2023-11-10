#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int one = 0;
	    int zero = 0;
	    for(int i = 0; i < n; i++){
	        if(s[i] == '1') one++;
	        else zero++;
	    }
	    int mn = min(one,zero);
	    if(mn % 2 ==1) cout<<"Zlatan"<<endl;
	    else cout<<"Ramos"<<endl;
	}
	return 0;
}
