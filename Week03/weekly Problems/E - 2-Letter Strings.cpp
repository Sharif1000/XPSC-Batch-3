#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
  
    map<char,ll>f_occ;
    map<char,ll>s_occ;
    map<string,ll>occ;
    
    vector<string>a(n);
    for(int i = 0; i < n; i++){
      cin>>a[i];
      f_occ[a[i][0]]++;
      s_occ[a[i][1]]++;
      occ[a[i]]++;
    }
  
    ll ans=0;
    ll val = 0;
  
    for(int i = 0; i < n; i++){
      ll x=max(val,f_occ[a[i][0]]-occ[a[i]]);
      ans+=x;
      x=max(val,s_occ[a[i][1]]-occ[a[i]]);
      ans+=x;
      if(f_occ[a[i][0]]>0) f_occ[a[i][0]]--;
      if(s_occ[a[i][1]]>0) s_occ[a[i][1]]--;
      if(occ[a[i]]>0) occ[a[i]]--;
    }
    cout<<ans<<endl;
  }
    return 0;
}
