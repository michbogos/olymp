#include<stdio.h>

int main(){
    int n, m;
    char command;
    scanf("%d %d %c", &n, &m, &command);
    if(command == 'W'){
        if(m+1 > n){
            printf("%d", n);
        }
        else{
            printf("%d", m+1);
        }
    }
    else{
        if(m+2 > n){
            printf("%d", n);
        } 
        else{
            printf("%d", m+2);
        }
    }
    return 0;
}