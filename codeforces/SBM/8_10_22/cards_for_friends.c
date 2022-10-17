#include<stdio.h>
#include<math.h>

int pow_2(int n){
    int res = 0;
    while(n%2==0){
        res ++;
        n/=2;
    }
    return res;
}



int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int w, h, n;
        scanf("%d %d %d", &w, &h, &n);
        if((int)pow(2, pow_2(w) + pow_2(h)) >= n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }
    return 0;
}