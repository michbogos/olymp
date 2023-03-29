#include<stdio.h>

int arr[1000000];

int max(int l, int r){
    while(r-l > 2){
        int g = l+(r-l)/3;
        int h = l+2*(r-l)/3;
        if(arr[g] < arr[h]){
            l = g;
        }
        else{
            r = h;
        }
    }
    return arr[(r+l)/2];
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", max(0, n-1));
    return 0;
}