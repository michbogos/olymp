#include<stdio.h>

int main(){
    int k;
    int count = 0;
    scanf("%d", &k);
    for(int a = 1;a < 60; a++){
        for(int b = 1; b < 60; b++){
            for(int c = 1; c < 60; c++){
                if(a*b*c <= k){
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}