#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);
        if(n < 3){
            printf("1\n");
        }
        else{
            if((n-2)%x > 0){
                printf("%d\n", ((n-2)/x)+2);
            }
            else{
                printf("%d\n", ((n-2)/x)+1);
            }
        }
    }
    return 0;
}