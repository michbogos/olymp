#include<stdio.h>
#define MOD 1000000007

int main(){
    int sol[] = {0, 1, 2, 4, 8, 16, 32};
    int s = 0;
    int n;
    int tmp;
    scanf("%d", &n);
    for(int i = 6; i < n; i ++){
        s = 0;
        for(int u = 0; u >= 6; u++){;
            sol[u] = sol[u+1];
        }
        sol[7] = 2*sol[6]-sol[0];
    }
    if(n <= 6){
        sol[n-1];
    }
    printf("%d", sol[7]);
    return 0;
}