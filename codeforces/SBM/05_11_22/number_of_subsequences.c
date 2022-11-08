#include<stdio.h>

int main(){
    int dp[21][3] = {0};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char c;
        scanf("%c", &c);
        if(c=='a'){
            dp[i][0] += dp[i-1][0] + 1;
        }
        if(c=='b'){
            dp[i][1] += dp[i-1][0] + dp[i-1][1];
        }
        if(c=='c'){
            dp[i][2] += dp[i-1][1] + dp[i-1][2];
        }
        if(c=='?'){
            dp[i][0] += dp[i-1][0] + 1;
            dp[i][1] += dp[i-1][0] + dp[i-1][1];
            dp[i][2] += dp[i-1][1] + dp[i-1][2];
        }
    }
    printf("%d", dp[n-1][2]);
    return 0;
}