#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      for(int i= 0; i < n; i++) cin>>a[i];
      int cnt = 0;
      for(int i = n - 2; i >=0; i--){
        while(a[i] != 0 && a[i] >= a[i+1]){
          a[i] /=2;
          cnt++;
        }
        if(a[i] >= a[i+1] || (a[i] == 0 && i > 0)){
          cnt = -1;
          break;
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
}
