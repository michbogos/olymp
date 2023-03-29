#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = arr[0];
    dp[2] = arr[1]+arr[0];
    vector<int> vec3 = {arr[0], arr[1], arr[2]};
    dp[3] = arr[0]
    for(int i = 2; i< n; i++){
        vector<int> last
        dp[i+1] = max(dp[i], dp[i-3])
    }
    return 0;
}