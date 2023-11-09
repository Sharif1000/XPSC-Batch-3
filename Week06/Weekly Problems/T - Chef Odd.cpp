#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    long long int n,k; cin>>n>>k;
    long long int val = k * 2;
    if(n >= val){
      long long int oddnum = n / 2 + n % 2;
      if((oddnum - k) % 2 == 0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}
