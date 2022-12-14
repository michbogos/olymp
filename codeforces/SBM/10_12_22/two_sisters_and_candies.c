#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        if(n<3) printf("0\n");
        else{
            if(n%2==0){
                printf("%d\n", (n/2)-1);
            }
            else{
                printf("%d\n", (n/2));
            }
        }
    }
    return 0;
}