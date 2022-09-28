#include<stdio.h>

int main(){
    int t;
    int s;
    scanf("%d", &t);
    for(int i = 0 ; i < t; i ++){
        scanf("%d", &s);
        if(s >= 1900){
            printf("Division 1\n");
        }
        else if(s >= 1600 && s < 1900){
            printf("Division 2\n");
        }
        else if(s >= 1400 && s < 1600){
            printf("Division 3\n");
        }
        else if(s < 1400){
            printf("Division 4\n");
        }
    }
    return 0;
}