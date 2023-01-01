#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<unsigned long long> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    vector<unsigned long long> dp(n);
    if(n==1){
        cout << a[0];
        return 0;
    }
    if(n==2){
        cout << a[0] + a[1];
        return 0;
    }
    if(n==3){
        cout << a[0] + a[1];
        return 0;
    }
    if(n==4){
        cout << a[0] + a[1] + a[3];
        return 0;
    }
    if(n==5){
        cout << min(a[0] + a[1] + a[3] + a[4], a[0] + a[1] + a[2]);
        return 0;
    }
    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    dp[2] = dp[1];
    dp[3] = dp[2] + a[3];
    dp[4] = min(dp[2] + a[3] + a[4], a[0] + a[1] + a[2]);
    for(int i = 5; i < n; i++){
        dp[i] = min(min(dp[i-1] + a[i], dp[i-3] + a[i-2] + a[i-1]), dp[i-5] + a[i-4] + a[i-3] + a[i-2]);
    }
    cout << dp[n-1];
    return 0;
}