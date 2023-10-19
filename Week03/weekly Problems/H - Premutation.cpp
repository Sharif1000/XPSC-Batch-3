#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n][n-1];
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n -1; j++){
          cin>>a[i][j];
        }
      }
      int fst = 0;
      int snd = 0;
      map<int,int>mp;
      for(int i = 0; i < n; i++){
        mp[a[i][0]]++;
      }
      for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > 1) fst = it->first;
        else snd = it->first;
      }
      vector<int>v;
      v.push_back(fst);
      fst = snd;
      for(int j = 1; j < n -1; j++){
        for(int i = 0; i < n; i++){
          if(a[i][j] != fst){
            snd = a[i][j];
          }
          
        }
        v.push_back(fst);
        fst = snd;
      }
      v.push_back(fst);
      for(int value:v){
        cout<<value<<" ";
      }
      cout<<endl;
    }
    return 0;
}
