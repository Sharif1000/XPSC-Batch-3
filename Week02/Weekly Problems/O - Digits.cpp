#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n, k; cin >> n >> k;
    int cnt = 0;
    while(n >= 1){
        n = n / k;
        cnt++;
    }
    cout<<cnt<<endl;
    
}
