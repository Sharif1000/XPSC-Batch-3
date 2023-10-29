#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int val = 1;
      int value = n;
      while(value > 9){
        value /=10;
        val *=10;
      }
      cout<<n-val<<endl;
    }
    return 0;
}
