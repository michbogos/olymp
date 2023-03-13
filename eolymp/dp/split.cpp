#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = n*(n+1)/2;
    if(sum%2 != 0){
        cout << 0;
        exit(0);
    }
    sum/=2;
    vector<long long> dp(sum+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = sum; j >= i; j--){
            dp[j] += dp[j-i];
        }
    }
    cout << dp[sum]/2;
    return 0;
}