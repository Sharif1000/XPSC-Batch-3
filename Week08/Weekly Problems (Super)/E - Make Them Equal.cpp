#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    bool flag = true;
    int idx = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] != c){
        flag = false;
      }
      else{
        idx = max(idx, i+1);
      }
    }
    if(flag){
      cout<<0<<endl;
    }
    else{
      if(idx <= n / 2){
        cout<<2<<endl;
        cout<<n-1<<" "<<n<<endl;
      }
      else{
        cout<<1<<endl;
        cout<<idx<<endl;
      }
    }
  }
  return 0;
}
