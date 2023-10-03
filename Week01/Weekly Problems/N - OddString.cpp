#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    string ss;
    for(int i = 0; i < len; i +=2){
      ss +=s[i];
    }
    cout<<ss;
    return 0;
}
