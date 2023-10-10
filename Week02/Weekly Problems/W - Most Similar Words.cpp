#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        
        vector<string> s(n);
        
        for(int i = 0; i < n; i++){
            cin>>s[i];
        }
        
        int val = INT_MAX;
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int cost = 0;
                string a = s[i];
                string b = s[j];
                for(int k = 0; k < m; k++){
                  cost += abs(a[k] - b[k]);
                }
                val = min(val, cost);
            }
        }
        
        cout<<val<<endl;
    }
    return 0;
}
