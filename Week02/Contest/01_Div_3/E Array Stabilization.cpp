#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }
    sort(a, a+n);
    int s1 = a[n-1] - a[0];
    int s2 = a[n-2] - a[0];
    int s3 = a[n-1] - a[1];
    int res = min(s1, min(s2,s3));
    cout<<res;
    return 0;
}
