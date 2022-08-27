#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, q, l, r;
    cin >> n;
    vector<int> nums(n);
    vector<int> dp(n+1);

    dp[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        dp[i+1] = (dp[i] ^ nums[i]);
    }
    cin >> q;
    vector<pair<int, int>> queries(q);
    for(int i = 0 ; i < q; i++){
        cin >> l >> r;
        queries[i] = {l-1, r-1};
        cout << (dp[l-1] ^ dp[r]) << "\n";
    }
    return 0;
}