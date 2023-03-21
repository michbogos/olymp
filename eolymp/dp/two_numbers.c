#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a = 2;
    int b = 4;
    if(n < 2){
        printf("%d\n", a);
        return 0;
    }
    if(n == 2){
        printf("%d\n", b);
        return 0;
    }
    else{
        int c;
        for(int i = 0; i < n-2; i++){
            c = a+b;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
    return 0;
}