#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<ll> a(n);
    
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<ll> freq(n+1,0);
    
    for(int i=0;i<n;i++){
       if(a[i]>n) continue;
       else freq[a[i]]++;
    }

    ll ans=0;
    for(int i=1;i<=n;i++){
       ll val=0;
       for(ll x=1;x*x<=i;x++){
          if(i%x==0){
             val+=freq[x];
             if(x*x!=i){
                val+=freq[i/x];
             }
          }
       }
       ans=max(ans,val);
    }
    cout<<ans<<endl;
 }
 return 0;
}
