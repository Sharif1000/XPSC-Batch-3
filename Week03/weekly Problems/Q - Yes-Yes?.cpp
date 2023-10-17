#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string y = "Yes";
    for(int i = 0; i < 18; i++) y +="Yes";
    while(t--){
      string s; cin>>s;
      if(y.find(s) != string::npos) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
