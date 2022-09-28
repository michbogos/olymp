#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> dp(n+1);
    for(int i = 0; i < n;i++){
        int num;
        cin >> num;
        nums[i] = num;
        dp[i] = 1;
    }
    dp[n] = 1;
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(nums[j] <= nums[i]){
                dp[i+1] += dp[j+1];
            }
        }
    }
    return 0;
}