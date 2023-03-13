#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << 0;
        exit(0);
    }
    if(n==1){
        cout << 2;
        exit(0);
    }
    if(n==2){
        cout << 2;
        exit(0);
    }
    vector<long long> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%1000000007;
    }
    cout << dp[n];
    return 0;
}