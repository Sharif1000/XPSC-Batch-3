#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      sort(s.begin(), s.end());
      string name = "Timur";
      sort(name.begin(), name.end());
      
      bool flag = true;
      if(n != 5) flag = false;
      else{
        for(int i = 0; i < n; i++){
          if(s[i] != name[i]){
            flag = false;
            break;
          }
        }
      }
      (flag) ? cout<<"YES":cout<<"NO";
      cout<<endl;
    }
    return 0;
}
