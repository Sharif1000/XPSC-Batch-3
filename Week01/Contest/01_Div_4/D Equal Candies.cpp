#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int mn = INT_MAX;
    int sum = 0;
    for(int i = 0; i < n ; i++){
      cin>>a[i];
      sum +=a[i];
      mn = min(mn, a[i]);
    }
    int val = sum - (n * mn);
    cout<<val<<endl;
  }

  return 0;
}
