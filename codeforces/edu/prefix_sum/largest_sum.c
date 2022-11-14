#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    long long l = 0;
    long long r = 0;
    long long mx = (long long)-10e5;
    long long prefix = 0;
    long long num = 0;
    long long arr[n];
    long long ll = 0;
    long long rr = 0;
    for(long long i=0;i < n;i++){
        scanf("%lld", &arr[i]);
        if(arr[i] > mx){
            mx = arr[i];
            l = i+1;
            r = i+1;
        }
    }
    if(mx < 0){
        printf("%lld %lld %lld", l, r, mx);
    }
    else{
        prefix = 0;
        l = 1;
        r = 1;
        mx = (long long)-10e5;
        for(long long i = 0; i < n; i++){
            prefix += arr[i];
            if(prefix > mx){
                mx = prefix;
                r = i+1;
                rr = r;
                ll = l;
            }
            if(prefix < 0){
                l = i+2;
                prefix = 0;
            }
        }
        printf("%lld %lld %lld", ll, rr, mx);
    }
    return 0;
}