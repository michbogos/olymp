#include<iostream>
#include<vector>

#define MOD 1000000007

using namespace std;

int main(){
    long long n;
    cin >> n;
    char matrix[n][n];
    long long dp[n][n];
    for(long long i = 0 ; i<n; i++){
        for(long long j = 0 ; j < n ; j++){
            cin >> matrix[i][j];
            dp[i][j]=0;
        }}
    bool flag = false;
    for(long long i = 0 ; i < n; i++){
        if(!flag){ 
            dp[i][0] = 1;
        }
        else{
            dp[i][0] = 0;
        }
        if(matrix[i][0] == '*'){
            flag = true;
            dp[i][0] = 0;
        }
    }
    flag = false;
    for(long long i = 0 ; i < n; i++){
        if(!flag){ 
            dp[0][i] = 1;
        }
        else{
            dp[0][i] = 0;
        }
        if(matrix[0][i] == '*'){
            flag = true;
            dp[0][i] = 0;
        }
    }
    for(long long i = 1; i< n; i++){
        for(long long j = 1; j < n; j++){
            if(matrix[i][j] != '*')
                dp[i][j] = (dp[i][j-1]%MOD + dp[i-1][j]%MOD)%MOD;
        }
    }
    cout << dp[n-1][n-1]%MOD;
    return 0;
}