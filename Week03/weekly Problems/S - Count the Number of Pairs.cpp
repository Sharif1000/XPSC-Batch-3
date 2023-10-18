#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int k; cin>>k;
      int a[26] = {0}, b[26] = {0};
      string s; cin>>s;
      for(int i = 0; i< n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
          a[s[i] - 'a']++;
        }
        else{
          b[s[i] - 'A']++;
        }
      }
      
      int cnt = 0;
      for(int i = 0; i< 26; i++){
        int val =min(a[i], b[i]);
        cnt +=val;
        a[i] -=val;
        b[i] -=val;
        int val2 = min(k, max(a[i], b[i]) / 2);
        k -=val2;
        cnt+=val2;
      }
      cout<<cnt<<endl;
      
    }
    return 0;
}
