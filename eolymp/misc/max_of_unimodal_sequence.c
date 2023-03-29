#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx = -2000000000;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        mx = arr[i] > mx ? arr[i] : mx;
    }
    printf("%d\n", mx);
    return 0;
}