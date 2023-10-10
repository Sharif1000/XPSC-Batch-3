#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      string a = "YES";
      string b = "yes";
      bool flag = true;
      for(int i = 0; i < 3; i++){
        if(s[i] == a[i] || s[i] == b[i]) continue;
        else{
          flag = false;
          break;
        }
      }
      (flag) ? cout<<"YES":cout<<"NO";
      cout<<endl;
    }
    return 0;
}
