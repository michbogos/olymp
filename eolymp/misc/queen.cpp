#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    long m, n, x, y;
    scanf("%ld %ld", &m, &n);
    scanf("%ld %ld", &x, &y);
    long diagonal1 = min(x-1, y-1);
    long diagonal2 = min(m-x, y-1);
    long diagonal3 = min(x-1, n-y);
    long diagonal4 = min(m-x, n-y);
    printf("%ld", ((m + n)-1 + diagonal1 + diagonal2 + diagonal3 + diagonal4)-1);
    return 0;
}