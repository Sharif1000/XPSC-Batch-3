#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int x;
  cin>>x;
  int mask = 1 << x;
  int val = 127;
  int newMask = (mask ^ val);
  int res = (newMask & n);
  cout<<res<<endl;
  return 0;
}
