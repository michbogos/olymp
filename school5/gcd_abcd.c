#include<stdio.h>

long long a, b, c, d, M;

void f(){
    while(b!=0){
            if(b==d && c < a && (c-a%b)%b == 0){
                printf("YES\n");
                return;
            }
            a =a%b;
            a=a^b;
            b=a^b;
            a=b^a;
    }
    printf("NO\n");
}

int main(){
    scanf("%lld", &M);
    while (M--){
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        f();
    }
    return 0;
}
