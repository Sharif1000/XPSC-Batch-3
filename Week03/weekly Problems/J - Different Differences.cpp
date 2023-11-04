#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int k,n; cin>>k>>n;
      int i = 1;
      int diff = 1;
      for(int j = 1; j <=k; j++){
        cout<<i<<" ";
        if(n - (i + diff) >= (k - (j + 1))){
          i += diff;
          diff++;
        }
        else i++;
      }
      cout<<endl;
    }
    return 0;
}
