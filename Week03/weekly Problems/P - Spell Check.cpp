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
      (s == name) ? cout<<"YES":cout<<"NO";
      cout<<endl;
    }
    return 0;
}
