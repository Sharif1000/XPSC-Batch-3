#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    string s; cin>>s;
    int n = s.size();
    int p; cin>>p;
    int cost = 0;
    vector<pair<int,int>>v;
    for(int i = 0; i < n; i++){
      int x = s[i] - 96;
      cost +=x;
      v.push_back({x,i});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    vector<int>idx(n+1, 0);
    int i = 0;
    while(cost > p && i < n){
      cost -=v[i].first;
      idx[v[i].second] = -1;
      i++;
    }
    for(int i = 0; i < n; i++){
      if(idx[i] != -1) cout<<s[i];
    }
    cout<<endl;
  }
  return 0;
}
