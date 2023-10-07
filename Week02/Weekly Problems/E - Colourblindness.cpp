#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n; cin>>n;
      string x,y;
      cin>>x>>y;
      bool flag = true;
      for(int i = 0; i < n; i++){
        if(x[i] == y[i] || (x[i] == 'B' && y[i] == 'G') || (x[i] == 'G' && y[i] == 'B')){
          continue;
        }
        else{
          flag = false;
          break;
        } 
      }
      (flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
