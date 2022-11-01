#include<stdio.h>

#define ll long long 
int main(){
    ll n;
    scanf("%lld", &n);
    ll prefix[n+1];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &prefix[i+1]);
        prefix[i+1] += prefix[i];
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