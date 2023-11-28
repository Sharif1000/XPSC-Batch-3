#include <bits/stdc++.h>
using namespace std;
#define ll long long

int left_bit(int n){
  if(n == 0) return 0;
  
  int val = 0;
  n /=2;
  while(n !=0){
    val++;
    n /=2;
  }
  return val;
}

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<int>v;
    for(int i = 0; i < n; i++){
      v.push_back(left_bit(a[i]));
    }
    map<int,int>mp;
    for(int value:v){
      mp[value]++;
    }
    ll ans = 0;
    for(auto a:mp){
      ll sz = a.second;
      ans += (sz * (sz - 1)) / 2;
    }
    cout<<ans<<endl;
  }
  return 0;
}
