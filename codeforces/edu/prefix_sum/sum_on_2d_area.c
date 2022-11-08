#include<stdio.h>
#define ll long long 
int main(){
    long long prefix [1001][1001] = {0};
    ll n, m;
    scanf("%lld %lld", &n, &m);
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            scanf("%lld", &(prefix[i+1][j+1]));
            prefix[i+1][j+1] += prefix[i][j+1] + prefix[i+1][j] - prefix[i][j];
        }
    }
    int q;
    int lx, ly, rx, ry;
    scanf("%d", &q);
    while(q--){
        int l, r;
        scanf("%d %d %d %d", &lx, &ly, &rx,&ry);
        printf("%lld\n", prefix[rx][ry]+prefix[lx-1][ly-1]-prefix[lx-1][ry]-prefix[rx][ly-1]);
    }
    return 0;
}