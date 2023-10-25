#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	string s;
	stack<string>st;
	map<string,int>mp;
	while(n--){
	    cin>>s;
	    st.push(s);
	}
	stack<string>stfinal;
	while(!st.empty()){
	  s = st.top();
	  mp[s]++;
	  if(mp[s] == 1) stfinal.push(s);
	  st.pop();
	}
	while(!stfinal.empty()){
	  s = stfinal.top();
	  st.push(s);
	  stfinal.pop();
	}
	string res;
	while(!st.empty()){
	    string ss = st.top();
	    int sz = ss.length();
	    res += ss[sz-2];
	    res += ss[sz-1];
	    st.pop();
	}
	cout<<res;
	return 0;
}
