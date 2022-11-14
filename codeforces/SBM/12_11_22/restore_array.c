#include<stdio.h>

int min(int a, int b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int arr[n];
        if(n == 2){
            printf("%d %d", x, y);
        }
        else{
            if((y-x)%(n-2) == 0){
                int inc = (y-x)/(n-2);
                while(x <= y){
                    printf("%d ", x);
                    x += inc;
                }
            }
            else{
                int res = 2;
                if(res%3==0){
                    res = 3;
                }
                for(int i = 2; i*i <= y-x; i++){
                    if((y-x)%i==0){
                        res = i;
                    }
                }

                int mid = ((y-x)/res);
                int inc = res;

                int back = x/res;
                if(x - (back*inc) == 0){
                    back -= 1;
                }

                back = min(n-mid, back);
                int element = x-(back*inc);
                for(int i = 0; i < n; i++){
                        printf("%d ", element);
                        element += inc;
                    }

                }
            }
            printf("\n");
        }
    return 0;
}