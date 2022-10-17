#include<stdio.h>

int main(){
    int n, k, t;
    scanf("%d", &t);
    for(int q = 0; q < t; q++){

        scanf("%d %d", &n, &k);

        int b[n];
        int a[n];
        int c[n];

        b[0] = 0;
        c[0] = 0;
        int count = 0;
        scanf("%d", &a[0]);
        for(int i = 1; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i]*a[i] > a[i-1]){
                b[i] = 1;
                c[i] = c[i-1] + b[i];
            }
            if(i-k > -1){
                if(c[i]-c[i-k] == k){
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}