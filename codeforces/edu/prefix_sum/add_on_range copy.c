#include<stdio.h>
#define ll long long

ll arr[1000002];
ll prefix[1000002];
ll b[1000002];


int main(){
    ll n;
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++){
        scanf("%lld", &arr[i]);
    }
    ll q;
    scanf("%lld", &q);
    for(ll i = 0; i < q; i++){
        ll l, r, c;
        scanf("%lld %lld %lld", &l, &r, &c);
        b[l] +=c;
        b[r+1] -= c; 
    }

    for(ll i = 0; i<n; i++){
        prefix[i+1] = prefix[i] + b[i+1];
    }

    for(ll i = 1; i <= n; i++){
        printf("%lld ", prefix[i] + arr[i]);
    }
    return 0;
}

