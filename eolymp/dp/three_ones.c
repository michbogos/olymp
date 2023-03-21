#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a = 2;
    int b = 4;
    int c = 7;
    if(n == 1){
        printf("%d\n", a);
    }
    if(n == 2){
        printf("%d\n", b);
    }
    if(n == 3){
        printf("%d\n", c);
    }
    else{
        int d;
        for(int i = 4; i <= n; i++){
            d = (a+b+c)%12345;
            a = b;
            b = c;
            c = d;
        }
        printf("%d\n", d);
    }
    return 0;
}