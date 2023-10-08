#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    int i = n + 1;
    int j = i;
    while(i <=9001){
      string s = to_string(j);
      int sz = s.length();
      set<int>digit;
      for(char c:s){
        digit.insert(c - '0');
      }
      if(digit.size() == sz){
        cout<<j;
        break;
      }
      j++;
    }
    return 0;
}
