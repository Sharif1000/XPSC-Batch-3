#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	  int n,k; cin>>n>>k;
	  map<int,pair<int,int>>mp;
	  
	  for(int i = 1; i<=n; i++){
	    int a;
	    cin>>a;
	    if(!mp.count(a)){
	      mp[a].first = i;
	      mp[a].second = i;
	    }
	    else{
	      mp[a].second = i;
	    }
	  }
	  while(k--){
	    int start, stop;
	    cin>>start>>stop;
	    if(mp[start].first > 0 && mp[stop].first > 0 && mp[start].first <= mp[stop].second){
	      cout<<"YES"<<endl;
	    }
	    else{
	      cout<<"No"<<endl;
	    }
	  }
	}
	return 0;
}
