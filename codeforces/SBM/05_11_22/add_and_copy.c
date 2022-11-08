#include<stdio.h>

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        int n;
        scanf("%d", &n);
        int min = (int)10e9;
        for(int i = 1; i*i <= n; i++){
            if(i-1+((n-i)+i-1)/i < min){
                min = i-1+((n-i)+i-1)/i;
            }
        }
        printf("%d\n", min);
    }
    return 0;
}