#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
      if(s[i] == 'A'){
        if(i+2 < n){
          if(s[i+1] == 'B' && s[i+2] == 'C'){
            cnt++;
          }
        }
      }
    }
    cout<<cnt;
    return 0;
}
