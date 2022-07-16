#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(c == 0){
        if(a > b){
            printf("%d", b);
            return 0;
        }
        else{
            printf("%d", a);
            return 0;
        }
    }
    else{
        if(a > b){
            printf("%d", a);
            return 0;
        }
        else{
            printf("%d", b);
            return 0;
        }
    }
    return 0;
}