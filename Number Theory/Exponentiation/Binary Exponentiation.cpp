#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll base, ll p){
  ll res = 1;
  while(p){
    if(p % 2 == 0){
      base =  base * base;
      p /= 2;
    }
    else{
      res = res * base;
      p--;
    }
  }
  return res;
}

int main() 
{
    ll t; cin>>t;
    while(t--){
      int base, p; 
      cin>>base>>p;
      cout<<power(base,p)<<endl;
    }
    return 0;
}
