#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 3){
        cout << 1;
        return 0;
    }
    vector<int> dp(n+1, 0);
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[n];
    return 0;
}