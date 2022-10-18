#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char flag = 0;
        unsigned long long n;
        scanf("%llu", &n);
        while(n%2==0){
            n /= 2;
            if(n <= 1){
                flag = 1;
                printf("NO\n");
            }
        }
        if(!flag){
            printf("YES\n");
        }
    }
    return 0;
}