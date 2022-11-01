#include<stdio.h>

#define ll long long 
ll main(){
    ll n;
    scanf("%lld", &n);
    ll prefix[n+1];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &prefix[i+1]);
        prefix[i+1] += prefix[i];
        printf("%lld ", prefix[i]);
    }
    printf("%lld", prefix[n]);
    return 0;
}