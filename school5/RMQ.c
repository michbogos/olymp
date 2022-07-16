#include <stdio.h>


#define MAX 100001
#define LOGMAX 17
#define MOD 4294967296

unsigned long long max(unsigned long long a, unsigned long long b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

unsigned long long N, M, A, B, a[MAX], arr[MAX][LOGMAX];

void Build_RMQ_Array(unsigned long long *b, unsigned long long n)
{
	unsigned long long i, j;
	for (i = 1; i <= n; i++) arr[i][0] = b[i];
	for (j = 1; 1 << j <= n; j++)
		for (i = 1; i + (1 << j) - 1 <= n; i++)
			arr[i][j] = max(arr[i][j - 1], arr[i + (1 << (j - 1))][j - 1]);
}
unsigned long long query(unsigned long long i, unsigned long long j)
{
	unsigned long long temp, k = 0;
	if (i > j) temp = i, i = j, j = temp;
	while (1 << (k + 1) <= j - i + 1) k++;
	return max(arr[i][k], arr[j - (1 << k) + 1][k]);
}

unsigned long long main() {
	scanf("%lld %lld %lld %lld", &N, &M, &A, &B);
    while(N > 0 && M > 0 && A > 0 && B > 0){
        unsigned long long count = 0;
        for (unsigned long long i = 0; i < N; i++){
            a[i] = (((i+1)*A)+B)%MOD;
            }
        Build_RMQ_Array(a, N);
        for (unsigned long long i = N+1; i <= (2*M)+N; i = i + 2)
        {
            count = count + query((((i*A)+B)%MOD)%N, ((((i+1)*A)+B)%MOD)%N);
        }
        printf("%lld\n",count);
        scanf("%lld %lld %lld %lld", &N, &M, &A, &B);
    }
	return 0;
}