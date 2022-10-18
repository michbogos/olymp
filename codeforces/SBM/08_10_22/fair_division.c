#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a = 0;
        int b = 0;
        int n;
        int num;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &num);
            if(num%2 == 0){
                b ++;
            }
            else{
                a ++;
            }
        }
        if((a + (2*b)) % 2 == 0 && b % 2 == 0 && a % 2 == 0){
            printf("YES\n");
        }
        else if((a + (2*b)) % 2 == 0 && b % 2 == 1 && a % 2 == 0 && a >= 2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}