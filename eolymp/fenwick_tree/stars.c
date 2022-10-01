#include<stdio.h>

#define MAX 32001

int fenwick[MAX][MAX];

int get(int x, int y){
    int res = 0;
    for(; x >= 0; x = (x & x +1)-1){
        for(;y >= 0; y = (y & y+1)-1){
            res += fenwick[x][y];
        }
    }
    return res;
}

void set(int x, int y){
    for(; x < MAX; x = (x | x +1)){
        for(; y < MAX; y = (y | y+1)){
            fenwick[x][y] += 1;
        }
    }
}

int main(){
    int n, x, y;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        set(x, y);
        get(x-1, y-1);
    }
    return 0;
}