#include<stdio.h>

void hanoi(int n, int a, int b, int c){
    if(n==0)return;
    hanoi(n-1, a, c, b);
    printf("%d %d\n", a, b);
    hanoi(n-1, c, b, a);
}

int main(){
    int m;
    scanf("%d", &m);
    hanoi(m, 1, 2, 3);
    return 0;
}