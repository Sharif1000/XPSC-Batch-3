#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n], b[n], c[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      for(int i = 0; i < n; i++) cin>>b[i];
      bool flag = true;
      set<int>s;
      int mx = INT_MIN;
      for(int i = 0; i < n; i++){
        if(a[i] < b[i]){
          flag = false;
          break;
        }
        if(b[i] != 0){
          s.insert(a[i] - b[i]);
        }
        else{
          mx = max(mx,a[i]);
        }
      }
      if(s.size() > 1) flag = false;
      vector<int>v;
      for(int val:s){
        v.push_back(val);
      }
      if(v.size() > 0){
      if(v[0] < mx) flag = false;
      }
      
      (flag) ? cout<<"YES":cout<<"NO";
      cout<<endl;
      
    }
    return 0;
}
