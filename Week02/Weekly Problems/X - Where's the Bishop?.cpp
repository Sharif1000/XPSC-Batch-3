#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
      char grid[9][9];
      for(int i = 1; i <=8; i++){
        for(int j = 1; j <=8; j++){
          cin>>grid[i][j];
        }
      }
      for(int i = 2; i <=7; i++){
        for(int j = 2; j <=7; j++){
          if(grid[i][j] == '#' && grid[i-1][j-1] == '#' && grid[i-1][j+1] == '#' && grid[i+1][j-1] == '#' && grid[i+1][j+1] == '#'){
            cout<<i<<" "<<j;
            break;
          }
        }
      }
      cout<<endl;
    }
    return 0;
}
