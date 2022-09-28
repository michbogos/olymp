#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long num_test;
    cin >> num_test;
    for (long long w = 0; w < num_test; w++){
        long long a, b,m,n;
        cin >> a >> b >> m >> n;
        vector<long long> nums(n+1);
        vector<long long> dp(n+1);
        nums[0] = a+b;
        nums[1] = a-b;
        for(long long u = 2 ; u<= n; u++){
            nums[u] = (a*nums[u-2]+b*nums[u-1])%m;
        }
        for(long long k = 0; k <= n; k++){
            long long mx = 0;
            for(long long j = 0; j<k; j++){
                if(nums[j] < nums[k]){
                    mx = max(mx, dp[j]);
                }
            }
            dp[k] = mx + 1;
        }
        long long mxx = 0;
        for(long long i : dp){
            mxx = max(mxx, i);
        }
        cout << mxx << "\n";
    }
    return 0;
}