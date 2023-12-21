#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
const int N = 1e6;
pii adj[N];
string s;

int dp(int a){
  if(adj[a].first == 0 && adj[a].second == 0) return 0;
  int ans = 1e9;
  
  if(adj[a].first != 0){
    int add = 0;
    if(s[a-1] != 'L') add  = 1;
    ans = min(ans, add + dp(adj[a].first));
  }
  
  if(adj[a].second != 0){
    int add = 0;
    if(s[a-1] != 'R') add  = 1;
    ans = min(ans, add + dp(adj[a].second));
  }
  return ans;
}


int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    cin>>s;

    for(int i = 1; i <= n; i++){
      int l,r;
      cin>>l>>r;
      adj[i].first = l;
      adj[i].second = r;
    }
    int val = dp(1);
    cout<<val<<endl;
  }
  return 0;
}
