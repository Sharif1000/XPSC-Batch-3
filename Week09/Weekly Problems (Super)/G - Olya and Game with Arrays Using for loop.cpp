#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  ll t; cin>>t;
  while(t--){
    ll x; cin>>x;
    int mn = INT_MAX;
    ll sum = 0;
    vector<int>v;
    
    while(x--){
      int mn1 = INT_MAX;
      int mn2 = INT_MAX;
      ll n; cin>>n;
      int a[n];
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mn = min(mn, a[i]);
        mn1 = min(mn1, a[i]);
      }
      int cnt = 0;
      for(int i = 0; i < n; i++){
        if(a[i] == mn1){
          if(cnt == 1){
            mn2 = a[i];
            break;
          }
          cnt++;
        }
        else{
          mn2 = min(mn2, a[i]);
        }
      }
      v.push_back(mn2);
      sum += mn2;
    }
    cout<<(mn + sum - *min_element(v.begin(), v.end()))<<endl;
  }
  return 0;
}
