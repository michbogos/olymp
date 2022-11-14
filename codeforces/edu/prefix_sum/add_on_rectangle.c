#include<stdio.h>

int main(){
    int prefix[1000][1000];
    int arr[1000][1000];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int q;
    scanf("%d", &q);
    for(int i = 1 ; i <= q;i++){
        int l1, l2, r1, r2, c;
        scanf("%d %d %d %d %d", &l1, &l2, &r1, &r2, &c);
        prefix[l1][l2] += c;
        prefix[l1][r1] -= c;
        prefix[l2][r2] -= c;
        prefix[r1][r2] += c;
    }
    for(int i =  1; i <= n; i++){
        for(int j = 1;j <= n; j++){
            prefix[i][j] += prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d", arr[i][j] + prefix[i][j]);
        }
    }

    return 0;
}