#include<stdio.h>

int bin_search(int a, int *array, int n){
    int l = 0;
    int r = n-1;
    while(r-l > 0){
        if(array[r] == a){
            return r;
        }
        if(array[l] == a){
            return l;
        }
        if(array[(r+l)/2] == a){
            return (r+l)/2;
        }
        if(array[(r+l)/2] > array[l]){
            l = (r+l)/2;
        }
        else{
            r = (r+l)/2;
        }
    }
    return -1;
}

int main(){
    int t, n, num;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int array[30] = {0};
        int count[10] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d", &num);
            if(count[num%10] < 3){
                array[3*(num%10)+count[num%10]] = num%10;
                count[num%10] ++;
            }
        }
        int k = 0;
        int l = 30;
        
    }
    return 0;
}