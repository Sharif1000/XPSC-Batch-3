#include <bits/stdc++.h>
using namespace std;
#define ll long long

string Binary(ll n)
{
    string s;
    for (int i = 64; i >= 0; i--){
        int k = n >> i;
        if (k & 1) s += '1';
        else s += '0';
    }
    return s;
}


int main() 
{
  int t; cin>>t;
  while(t--){
    ll n; cin>>n;
    ll a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<int>v(64);
    for(int i = 0; i < n; i++){
      string s = Binary(a[i]);
      for(int j = 0; j < 64; j++){
        if(s[j] == '1') v[j]++;
      }
    }
    int g = 0;
    for(int i = 0; i < 64; i++) g = __gcd(g, v[i]);
    for(int i = 1; i <= n; i++){
      if(g % i == 0) cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}
