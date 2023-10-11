#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++){
      int x; cin>>x;
      string s; cin>>s;
      for(char c:s){
        if(c == 'D') a[i]++;
        else a[i]--;
      }
      if(a[i] > 9) a[i] =a[i]-10;
      else if(a[i] < 0) a[i] = a[i] +10;
    }
    for(int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
