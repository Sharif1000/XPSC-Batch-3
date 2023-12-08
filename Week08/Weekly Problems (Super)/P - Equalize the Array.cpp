#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    map<int,int>mp;
    
    for(int i = 0; i < n; i++){
      int val;
      cin>>val;
      mp[val]++;
    }
    vector<int>v;
    for(auto it:mp) v.push_back(it.second);
    sort(v.begin(), v.end());
    int mn = INT_MAX;
    int sz = mp.size();
    for(int i = 0; i < sz; i++) mn = min(mn, n - v[i] * (sz - i));
    cout<<mn<<endl;
  }
  return 0;
}
