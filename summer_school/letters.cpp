#include<bits/stdc++.h>



using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<long long> blocks(n);
    vector<long long> letters(m);
    vector<long long> dp(n+1);
    
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> blocks[i];
        dp[i+1] = dp[i] + blocks[i];
    }

    for(int i = 0; i < m; i++){
        cin >> letters[i];
        long long index = lower_bound(dp.begin(), dp.end(), letters[i])-dp.begin();
        cout << index << " " << letters[i] - dp[index-1] << "\n";
    }
    return 0;
}