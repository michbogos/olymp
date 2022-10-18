#include<stdio.h>

#define ull unsigned long long

ull fac(ull x){
    ull res = 1;
    for(ull i = 1; i<= x; i++){
        res *= i;
    }
    return res;
}

ull bin_coeff(ull n, ull k){
    return fac(n)/fac(k)/fac(n-k);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int dp[n+2]; // possible error on 0 bound;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            dp[arr[i]] ++;
            dp[arr[i+1]] ++;
            dp[arr[i-1]] ++;
        }
        ull count = 0;
        for(int i = 1; i < n+1; i++){
            count += bin_coeff(1, 2);
        }
    }
    return 0;
}