#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    int x; cin>>x;
    auto it = upper_bound(v.begin(), v.end(), x);
    int idx = it - v.begin();
    cout<<idx;
    return 0;
}