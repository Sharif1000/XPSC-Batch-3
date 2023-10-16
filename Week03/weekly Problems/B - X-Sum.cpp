#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int row,col;
      cin>>row>>col;
      int a[row][col];
      for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
          cin>>a[i][j];
        }
      }
      int mx = INT_MIN;
      for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
          int sum = 0;
          sum +=a[i][j];
          pair<int,int>ap[4];
          ap[0] = make_pair(i-1,j-1);
          ap[1] = make_pair(i+1,j-1);
          ap[2] = make_pair(i-1,j+1);
          ap[3] = make_pair(i+1,j+1);
 
          for(int k = 0; k < 4; k++){
            int x = ap[k].first;
            int y = ap[k].second;
            while(x >= 0 && x < row && y >= 0 && y < col){
              sum +=a[x][y];
              if(k == 0){
                x--;
                y--;
              }
              else if(k == 1){
                x++;
                y--;
              }
              else if(k == 2){
                x--;
                y++;
              }
              else{
                x++;
                y++;
              }
            }
          }
          mx = max(sum, mx);
          
        }
      }
      cout<<mx<<endl;
    }
    return 0;
}
