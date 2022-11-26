#include<stdio.h>

int cost(char* a, char* b) {
    int res = 0;
    int i = 0;
    while(a[i]){
        res += abs(a[i] - b[i]);
    }
    return res;
}

int min(int a, int b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n,m;
        scanf("%d %d", &n, &m);
        char strings [n][m];
        for(int i = 0; i < n; ++i) {
            scanf("%s", &strings[i]);
        }
        int ans = 1000000000;
        for(int i = 0; i < n; ++i) {
            for(int j = i + 1; j < n; ++j) {
                ans = min(ans, cost(strings[i], strings[j]));
            }
        }
        printf("%d\n", ans);
    }
}