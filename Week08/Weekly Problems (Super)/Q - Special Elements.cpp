#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<bool>v(n+1, false);
    ll sum = 0;
    for(int i = 0; i < n - 1; i++){
      sum = a[i];
      for(int j = i + 1; j < n; j++){
        sum += a[j];
        if(sum <= n) v[sum] = true;
      }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
      if(v[a[i]] == true) cnt++;
    }
    cout<<cnt<<endl;
  }
  return 0;
}
