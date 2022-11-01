#include<stdio.h>

#define ll long long 
int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);
    ll prefix[n+1][m+1];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            scanf("%lld", &(prefix[i+1][j+1]));
            prefix[i+1][j+1] += prefix[i][j+1] + prefix[i+1][j] - prefix[i][j];
        }
    }
    int q;
    scanf("%d", &q);
    while(q--){
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", prefix[r]-prefix[l-1]);
    }
    return 0;
}