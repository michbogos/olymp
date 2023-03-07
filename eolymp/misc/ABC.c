#include<stdio.h>

int main(){
    int k;
    int count = 0;
    scanf("%d", &k);
    for(int a = 1; a <= k; a++){
        for(int b = 1; a*b <= k; b++){
                count += k/(a*b);
        }
    }
    printf("%d\n", count);
    return 0;
}