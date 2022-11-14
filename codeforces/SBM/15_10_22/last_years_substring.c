#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char c;
        scanf("%d", &n);
        char arr[n];
        scanf("%c", &c);
        for(int i = 0; i < n; i++){
            scanf("%c", &arr[i]);
        }
        if(arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[3] == '0'){
            printf("YES\n");
        }
        else{
            if(arr[0] == '2' && arr[1] == '0' && arr[n-2] == '2' && arr[n-1] == '0'){
                printf("YES\n");
            }
            else{
                if(arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[n-1] == '0') printf("YES\n");
                else{
                if(arr[n-4] == '2' && arr[n-3] == '0' && arr[n-2] == '2' && arr[n-1] == '0') printf("YES\n");
                else{
                    if(arr[0] == '2' && arr[n-3] == '0' && arr[n-2] == '2' && arr[n-1] == '0') printf("YES\n");
                    else{
                        printf("NO\n");
                    }
                }
                }
            }
        }
    }

    return 0;
}