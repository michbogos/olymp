#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && b < c){
        printf("Up\n");
        return 0;
    }
    else if(a > b && b > c){
        printf("Down\n");
        return 0;
    }
    else{
        printf("Not understand\n");
        }
    return 0;
}