#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int main() 
{
    int n; cin>>n;
    vector<bool> a(N,false);
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      a[x] = true;
    }
    for(int i = 1; i <= n; i++){
      if(a[i] != true){
        cout<<i;
        break;
      }
    }
    return 0;
}
