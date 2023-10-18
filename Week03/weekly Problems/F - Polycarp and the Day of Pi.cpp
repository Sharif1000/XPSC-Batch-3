#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    string pi = "3141592653589793238462643383279502";
    while(t--){
      string s; cin>>s;
      int cnt = 0;
      for(int i = 0; i < s.length(); i++){
        if(s[i] ==pi[i]) cnt++;
        else break;
      }
      cout<<cnt<<endl;
    }
    return 0;
}
