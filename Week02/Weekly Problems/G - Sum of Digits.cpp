#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    int sum = 0;
    stringstream ss;
    ss<<s;
    int cnt = 0;
    if(s.length() > 1){
      cnt++;
    }
    char c;
    while(ss>>c){
      sum = sum + (c - '0');
    }
    while(sum > 9){
      stringstream ss2;
      ss2<<sum;
      char c2;
      sum = 0;
      while(ss2>>c2){
        sum = sum + (c2 - '0');
      }
      cnt++;
    }
    cout<<cnt;
    return 0;
}
