#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if(n/2021 >= n%2020){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    
    return 0;
}