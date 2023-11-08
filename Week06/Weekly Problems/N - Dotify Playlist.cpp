#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    vector<int>v;
	    while(n--){
	        int len, lan; cin>>len>>lan;
	        if(lan == l) v.push_back(len);
	    }
	    sort(v.begin(), v.end(), greater<int>());
	    if(v.size() < k) cout<<-1<<endl;
	    else{
	        long long int sum = 0;
	        for(int j = 0; j < k; j++){
	            sum += v[j];
	        }
	        cout<<sum<<endl;
	    }
	}
	return 0;
}
