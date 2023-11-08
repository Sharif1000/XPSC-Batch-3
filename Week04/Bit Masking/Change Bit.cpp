#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int x;
  cin>>x;
  int mask = 1 << x;
  n ^= mask;
  cout<<n;
  return 0;
}
