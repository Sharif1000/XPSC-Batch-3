class Solution{
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i = 0, j = 0;
        long long int sum = 0;
        long long int mx = INT_MIN;
        while(j < Arr.size()){
            sum +=Arr[j];
            
            if(j >= K -1){
                mx = max(mx, sum);
                sum -=Arr[i];
                i++;
            }
            j++;
        }
        return mx;
    }
};
