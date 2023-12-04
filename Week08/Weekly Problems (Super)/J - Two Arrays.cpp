#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];
    sort(a, a+n);
    sort(b, b+n);
    bool flag = true;
    for(int i = 0; i < n; i++){
      if(a[i] == b[i] || a[i] + 1 == b[i]) continue;
      else{
        flag = false;
        break;
      }
    }
    (flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
  }
  return 0;
}
