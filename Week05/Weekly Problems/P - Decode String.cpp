#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      string res = "";
      char c = 'a' - 1;
      int i = n -1;
      while(i >=0){
        if(s[i] != '0'){
          res += c + s[i] - '0';
          i--;
        }
        else{
          res +=stoi(s.substr(i-2,2)) + c;
          i -=3;
        }
      }
      reverse(res.begin(), res.end());
      cout<<res<<endl;
    }
    return 0;
}
