#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n,m; cin>>n>>m;
    int val = n * m;
    if(val % 3 == 0) cout<<(val / 3)<<endl;
    else cout<<(val / 3) + 1<<endl;
  }
  return 0;
}
