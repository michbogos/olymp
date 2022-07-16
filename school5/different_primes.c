#include<stdio.h>

#define MAX 3100000

int tests, n;
int deg[MAX], ans[MAX];

int main(){
    int i, j, ptr = 1;
    for(i = 2; i < MAX; i++)
        if (deg[i] == 0)
            for(j=2*i; j < MAX; j += i) deg[j]++;
    for(i = 2; i < MAX; i++)
        if (deg[i] >= 3) ans[ptr++] = i;
    
    scanf("%d", &tests);
    while(tests--){
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}