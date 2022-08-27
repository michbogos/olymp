#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool flag = false;
    vector<int> nums(n);
    vector<int> dp(n+1);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        dp[i+1] = dp[i] ^ nums[i];
        if (dp[i+1] == 0){
            cout << "YES\n";
            flag = true;
        }
    }
    if(!flag){
        cout << "NO\n";
    }
    return 0;
}