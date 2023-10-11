#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
      string s;
      cin>>s;
      int fst = 0, lst = 0, val = 0;
      
      for(char a:s)
      {
        if(val < 3)
        {
          fst= fst + a - 48;
          val++;
        }
        else lst= lst + a - 48;
      }
      if(fst == lst) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}
