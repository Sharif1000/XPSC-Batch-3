#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int a[26] = {0};
    for(char c:s){
      a[c - 'a']++;
    }
    bool flag = false;
    char val;
    for(int i = 0; i < 26; i++){
      if(a[i] == 0){
        val = i + 'a';
        flag = true;
        break;
      }
    }
    (flag) ? cout<<val:cout<<"None";
    return 0;
}
