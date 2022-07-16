#include<stdio.h>

int main(){
    int x, y, n;
    int q1 = 0;
    int q2 = 0;
    int q3 = 0;
    int q4 = 0;
    int q0 = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if((x > 0) && (y > 0)){
            q1++;
        }
        else if((x < 0) && (y > 0)){
            q2++;
        }
        else if((x < 0) && (y < 0)){
            q3++;
        }
        else if((x > 0) && y < 0){
            q4++;
        }
        else if((x == 0) || (y == 0)){
            q0++;
        }
    }
    printf("%d\n%d\n%d\n%d\n%d\n", q1, q2, q3, q4, q0);
    return 0;
}