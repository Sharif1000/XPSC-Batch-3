#include <bits/stdc++.h>
using namespace std;

bool primeNumber(int number){
  if(number <=1) return false;
  for(int i = 2; i*i<=number; i++){
    if(number % i == 0) return false;
  }
  return true;
}
int main() 
{
    int n; cin>>n;
    vector<int>vp;
    vector<int>vnp;
    for(int i = 2; i <=n; i++){
      bool val = primeNumber(i);
      if(val) vp.push_back(i);
      else vnp.push_back(i);
    }
    
    int cnt = 0;
    for(int i:vnp){
      int res = 0;
      for(int j:vp){
        if(i % j == 0) res++;
      }
      if(res == 2) cnt++;
    }
    cout<<cnt;
    return 0;
}
