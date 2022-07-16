#include<stdio.h>
#include<math.h>

int main(){
    int l;
    scanf("%d\n", &l);
    float side = 2 * l / pow(3, 0.25);
    float area = ((3.0f * pow(3, 0.5)) / 2) * (side * side);
    printf("%d", (int)area);
    return 0;
}