#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    if(n % 2 == 1) cout<<-1<<endl;
    else{
      while(n){
        cout<<n<<" ";
        n--;
      }
      cout<<endl;
    }
  }
  return 0;
}
