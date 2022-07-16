#include<stdio.h>

int main(){
    long long a, b, count;
    count = 1;
    scanf("%lld %lld", &a, &b);
    while(a > 0 && b > 0){
        printf("Case %lld: %lld\n", count, ((b*(b-1))/2)*((a*(a-1))/2));
        scanf("%lld %lld", &a, &b);
        count ++;
    }
    return 0;
}