#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int mx = -1000;
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] > mx){
                mx = arr[i];
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == mx){
                count ++;
            }
        }

        if(count == n){
            printf("-1\n");
            continue;
        }

        if(arr[0] == mx && arr[1] < mx){
                printf("1\n");
        }
        else{
            if(arr[n-1] == mx && arr[n-2] < mx){
                printf("%d\n", n);
            }
            else{
                for(int i = 1; i < n-1; i++){
                    if((arr[i] == mx && arr[i+1] < mx) || (arr[i] == mx && arr[i-1] < mx)){
                        printf("%d\n", i+1);
                        break;
                    }
            }
            }
        
        }

    }
    return 0;
    }