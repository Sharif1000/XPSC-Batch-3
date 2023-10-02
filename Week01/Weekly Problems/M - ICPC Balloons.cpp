#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int x;
      cin>>x;
      string s;
      cin>>s;
      int cnt = 0;
      int arr[26] = {0};
      for(char a:s){
        arr[a - 65]++;
        if(arr[a - 65] == 1) cnt +=2;
        else cnt++;
      }
      cout<<cnt<<endl;
    }
  return 0;
}
