#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int x){
  if(x <= 1) return false;
  for(int i =2; i <= sqrt(x); i++){
    if(x % i == 0) return false;
  }
  return true;
}

bool is_almost_Prime(int x){
  for(int i = 2; i <= sqrt(x); i++){
    if(x % i == 0){
      if(is_Prime(i) && is_Prime(x/i) && i != (x/i)){
        return true;
      }
    }
  }
  return false;
}
int main() {
    int n; cin>>n;
    int cnt = 0;
    for(int i = 2; i <=n; i++){
      if(is_almost_Prime(i)) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
