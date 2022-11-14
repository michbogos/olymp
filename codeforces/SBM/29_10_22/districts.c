#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0 ; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int item1 = arr[0];
        int item2;
        int idx;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != item1){
                item2 = arr[i];
                idx = i;
                flag = 1;
            }
        }
        if(flag){
            printf("YES\n");
            printf("%d %d\n", 1, idx+1);
            for(int i = 0; i < n; i++){
                if(i != 0 && i != idx){
                    if(arr[i] == item1){
                        printf("%d %d\n", idx+1, i+1);
                    }
                    else{
                        printf("%d %d\n", 0+1, i+1);
                    }
                }
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}