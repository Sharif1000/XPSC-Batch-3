--Problem Link: https://codeforces.com/contest/1944/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
        int n, k;
    cin >> n >> k;
    int arr[n * 2];
    for (int i = 0; i < (n * 2); i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> fst, snd;
    for (int i = 0; i < n; i++) fst[arr[i]]++;
    for (int i = n; i < (n * 2); i++) snd[arr[i]]++;

    vector<int> l, r;
    int ltemp = k * 2, rtemp = k * 2;

    for (auto it = fst.begin(); it != fst.end(); ) {
        if (ltemp > 0 && it->second == 2) {
            l.push_back(it->first);
            l.push_back(it->first);
            ltemp -= 2;
            it = fst.erase(it);
        } else ++it;
    }
    
    for (auto it : fst) {
        if (ltemp > 0) {
            l.push_back(it.first);
            r.push_back(it.first);
            ltemp--;
        }
    }

    for (auto it = snd.begin(); it != snd.end(); ) {
        if (rtemp > 0 && it->second == 2) {
            r.push_back(it->first);
            r.push_back(it->first);
            rtemp -= 2;
            it = snd.erase(it);
        } else ++it;
    }

    for (int x : l) cout << x << " ";
    cout << endl;
    for (int x : r) cout << x << " ";
    cout << endl;
  }
  return 0;
}
