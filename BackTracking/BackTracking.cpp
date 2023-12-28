#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forl(i,a,b) for(int i = a; i < b; i++)
#define en endl
bool vis[20];
vector<int>v;

void back(int n, vector<int> &v){
  if(v.size() == n){
    for(int x:v){
      cout<<x<<" ";
    }
    cout<<en;
  }
  
  forl(i,1,n+1){
    if(vis[i] == false){
      v.push_back(i);
      vis[i] = true;
      back(n,v);
      vis[i] = false;
      v.pop_back();
    }
  }
}

void solve(){
  int n; cin>>n;
  memset(vis, false, sizeof(vis));
  back(n,v);
}

int main() 
{
  solve();
  return 0;
}
