#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum = 0;
        cin >> n;
        vector<int> dp(n+2, 0);
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n-1; i ++){
            dp[i+2] = max(dp[i+1]+arr[i+1], dp[i+1] + ((arr[i])*(-1))+(arr[i+1]*(-1)));
            // if((arr[i]*(-1) + arr[i+1]*(-1)) > 0){
            //     arr[i]*=-1;
            //     arr[i+1] *=-1;
            // }
        }
        for(int i : arr){
            sum += i;
        }
        cout<< "Output: " << dp[n+1] << "\n";
    }
    return 0;
}