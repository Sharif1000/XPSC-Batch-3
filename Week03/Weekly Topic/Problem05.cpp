#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n, k; cin>>n>>k;
    long long int mod = 1e9+7;
    long long int res = 1;
    while(k>0){
        res = (res * n)% mod;
        k--;
    }
    cout<<res<<endl;
  }
  return 0;
}
