--Problem Link: https://codeforces.com/problemset/problem/579/A

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int ans = 0;
  while(n > 0){
    ans += n & 1;
    n >>=1;
  }
  cout<<ans;
  return 0;
}
