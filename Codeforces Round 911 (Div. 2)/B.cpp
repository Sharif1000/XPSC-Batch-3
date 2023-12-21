#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(b % 2 == c % 2)<<" "<<(c % 2 == a % 2)<<" "<<(b % 2 == a % 2)<<endl;
  }
  return 0;
}
