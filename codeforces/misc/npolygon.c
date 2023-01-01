#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    if(n%2==0){
        printf("%lld", n-2);
        return 0;
    }
    long long res = -1;
    for(long long i = 2; i*i <= n; i++){
        if(n%i == 0){
            res=i;
            break;
        }
    }
    if(res == -1){
        printf("-1");
    }
    else{
        printf("%lld", n-res);
    }
    return 0;
}