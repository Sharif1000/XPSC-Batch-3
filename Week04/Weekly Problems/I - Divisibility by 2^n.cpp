#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    ll cnt = 0;
    vector<ll>v;
    for(ll i = 1; i <= n; i++){
      ll x; cin>>x;
      while(x % 2 == 0){
          cnt++;
          x /=2;
      }
      ll cur = i;
      ll temp = 0;
      while(cur % 2 ==0){
        temp++;
        cur /=2;
      }
      v.push_back(temp);
    }

    if(cnt >=n){
      cout<<0<<endl;
    }
    else{
      sort(v.begin(), v.end(), greater<ll>());
      ll res = 0;
      for(int i = 0; i < v.size(); i++){
        cnt +=v[i];
        res++;
        if(cnt >=n){
          cout<<res<<endl;
          break;
        }
      }
      if(cnt < n) cout<<-1<<endl;
    }
  }
  return 0;
}
