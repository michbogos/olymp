#include<stdio.h>
#include<math.h>

int main(){
    float k,n;
    scanf("%f %f", &k, &n);
    printf("%d %d", (int)ceil(n/k), (int)(n-k*((int)(ceil(n/k)-1.0f))));
    return 0;
}