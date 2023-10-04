#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n];
    int res = 0;
    int j = 1;
    for(int i = 0; i < n; i++){
      cin>>a[i];
      if(a[i] > j){
        int diff = a[i] - j;
        res +=diff;
        j +=diff;
      }
      j++;
    }
    cout<<res<<endl;
  }
  return 0;
}
