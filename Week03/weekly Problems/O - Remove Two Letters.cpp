#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      int cnt = n - 1;
      for(int i = 1; i < n - 1; i++){
        if(s[i-1] == s[i+1]) cnt--;
      }
      cout<<cnt<<endl;
    }
    return 0;
}
