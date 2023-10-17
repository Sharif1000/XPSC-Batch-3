#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      set<string>val;
      for(int i = 0; i < n -1; i+=1){
        string ss;
        for(int j = i; j < i +2; j++) ss +=s[j];
        val.insert(ss);
      }
      cout<<val.size()<<endl;
    }
    return 0;
}
