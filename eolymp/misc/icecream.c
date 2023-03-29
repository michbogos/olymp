#include<stdio.h>

int arr[1000000];
int n;

int f(int d){
    int res = 1;
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr += arr[i+1]-arr[i];
            if(curr >= d){
                curr = 0;
                res++;
            }
        }
    return res;
}

int main(){
    int q;
    int k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int l = 0;
    int r = 10e9;
    int mid;
    while(r-l>1){
        mid = (r+l)/2;
        if(f(mid) >= k) l = mid;
        else r = mid;
    }
    if(f(r)>=k){
            printf("%d\n", r);
            return 0;
        }
    else{
        printf("%d\n", l);
        return 0;
        }
    return 0;
}