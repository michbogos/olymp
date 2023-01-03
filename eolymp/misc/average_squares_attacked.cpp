#include<stdio.h>
#include<algorithm>
#include<vector>
#define N 5
#define M 5

using namespace std;

long long

int main(){
    for(int i = 1; i <= N; i++){
        for(int j = 1 ; j <= M; j++){
        long diagonal1 = min(j-1, i-1);
        long diagonal2 = min(M-j, i-1);
        long diagonal3 = min(j-1, N-i);
        long diagonal4 = min(M-j, N-i);
        printf("%ld ", ((N+M)-1 + diagonal1 + diagonal2 + diagonal3 + diagonal4)-1);
        }
        printf("\n");
    }
    return 0;
}