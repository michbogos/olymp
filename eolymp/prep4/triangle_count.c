#include<stdio.h>

long long T(long long x){
    return x * (x+1) / 2;
}

int main(){
    long long n, a, count;
    count = 0;
    scanf("%lld", &n);
    for(long long i = 0; i < n; i++){
        scanf("%lld", &a);
        count = 0;
        for(long long i = 1; i <=a; i++){
            count += T(i);
        }
        for(long long i = a-1; i > 0; i = i-2){
            count += T(i);
        }
        printf("%lld\n", count);
    }
    return 0;
}