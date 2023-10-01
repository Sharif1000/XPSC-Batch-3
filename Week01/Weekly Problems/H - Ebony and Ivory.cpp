#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c; cin>>a>>b>>c;
    bool flag = false;
    if(c % a == 0 || c % a == b || c % b == 0 || c % b == a || c % (a+b) == 0 || c % (a+b) == a || c % (a+b) == b){
      flag = true;
    }
    else{
      int s = c;
      for(int i = a; i <= c; i +=a){
        s -= a;
        if( s % b == 0){
          flag = true;
          break;
        }
      }
      int ss = c;
      for(int i = b; i <= c; i +=b){
        ss -= b;
        if( s % a == 0){
          flag = true;
          break;
        }
      }
    }
    if(flag == true){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
}
