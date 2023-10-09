#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      string s; cin>>s; 
      int n; cin>>n;
      int hr = (s[0] - '0') * 10 + s[1] - '0';
      int mn = (s[3] - '0') * 10 + s[4] - '0';
      int total = hr * 60 + mn;
      int cnt = 0;
      set<int>unique;
      for(int i = 0; i <= 1440; i++){
        unique.insert(total);
        total +=n;
        total = total % 1440;
      }
      for(int t:unique){
        int hour = t / 60;
        int minute = t % 60;
        string tim;
        if(hour < 10){
          tim +="0";
        }
        string ss = to_string(hour);
        tim += ss;
        tim +=":";
        if(minute < 10){
          tim +="0";
        }
        string ss2 = to_string(minute);
        tim += ss2;
        int j = 0, k = 4;
        bool flag = true;
        while(j <=k){
          if(tim[j] != tim[k]){
            flag = false;
          }
          j++;
          k--;
        }
        if(flag == true) cnt++;
      }
      cout<<cnt<<endl;
    }
    return 0;
}
