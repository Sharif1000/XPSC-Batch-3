#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];
    int lst = 0;
    for(int i = 0; i < n; i++){
      int x = max(lst, a[i]);
      cout<<b[i] - x<<" ";
      lst = b[i];
    }
    cout<<endl;
  }
  return 0;
}
