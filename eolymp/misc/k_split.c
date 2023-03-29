#include<stdio.h>

long long arr[1000000];
long long n;
long long k;

long long f(long long sum){
    long long count = 0;
    long long current = 0;
    for(long long i = 0; i < n; i++){
        if(current + arr[i] > sum){
            current = arr[i];
            count ++;
        }
        else current += arr[i];
    }
    if(current > 0){
        count ++;
    }
    return count;
}

long long max(long long l, long long r){
    while(r-l > 1){
        long long mid = (l+r)/2;
        if(f(mid) <= k){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    if(f(l) <= k){
        return l;
    }
    else return r;
}

int main(){
    scanf("%lld %lld", &n, &k);
    long long mxx = 0;
    long long mx = 0;
    for(long long i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
        mx += arr[i];
        if(arr[i] > mxx) mxx = arr[i];
    }
    printf("%lld", max(mxx, mx));
    long long res = f(9);
    return 0;
}