#include<stdio.h>
#include<string.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int arr[n];
        int dp[n];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            dp[i] = arr[i];
        }
        int mx = 0;
        for(int i = n-1; i>-1; i--){
            if(i+arr[i] < n){
                dp[i] = MAX(dp[i], dp[i+arr[i]]+dp[i]);
            }
            if(mx < dp[i]){
                mx = dp[i];
            }
        }
        printf("%d\n", mx);

    }
    return 0;
}