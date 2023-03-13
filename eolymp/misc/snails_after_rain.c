#include<stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char str[2*n];
        for(int j = 0; j < i; j ++){
            str[j] = ':';
        }
        for(int j = i; j < 2*n-1-i; j++){
            str[j] = '@';
        }
        for(int j = 2*n-1-i; j < 2*n-1; j++){
            str[j] = ':';
        }
        str[2*n-1] = '\0';
        puts(str);
    }
    return 0;
}