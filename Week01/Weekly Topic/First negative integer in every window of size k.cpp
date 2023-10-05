vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
             long long int i = 0, j = 0;
             queue<int>q;
             vector<long long int>v;
             while(j < N){
                 if(A[j] < 0){
                     q.push(A[j]);
                 }
                 
                 if(j >= K - 1){
                     if(!q.empty()){
                         v.push_back(q.front());
                     }
                     else{
                         v.push_back(0);
                     }
                     if(A[i] < 0){
                         q.pop();
                     }
                     i++;
                 }
                 j++;
             }
             return v;
 }
