#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
      int n; cin >> n;
      string s; cin >> s;
      string ss;
      for(int i = 0; i < n; i++){
        ss +=tolower(s[i]);
      }
      auto it = unique(ss.begin(), ss.end());
      ss.erase(it, ss.end());
      (ss == "meow") ? cout<<"YES":cout<<"NO";
      cout<<endl;
    }
}
