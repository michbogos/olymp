#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(100001, 0);
    vector<int> dp(100001, 0);
    for(int i = 0; i < n ; i ++){
        int num;
        cin >> num;
        arr[num]++;
    }
    for(int i = 0; i < 100001; i++){
        dp[i] = dp[i-1] + arr[i];
    }
    int sum = 0;
    for(int i = 0; i < 100000-k-1; i++){
        sum = max(sum, dp[i+k+1]-dp[i]);
    }
    cout << sum << "\n";
    return 0;
}