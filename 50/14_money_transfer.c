#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int sol = a/107;
    int cost = sol*7;
    sol *= 100;
    if((a-sol)%7 > 7){
        sol += (a%107)-7;
        cost += 7;
    }
    if(sol == 0 && cost == 0){
        cost = 7;
        sol = a-7;
    }
    printf("%d %d", sol, cost);
    return 0;
}