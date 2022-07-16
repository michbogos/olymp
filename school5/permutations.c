#include <stdio.h>

#define MAX 100001

int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int mas[MAX][17];
int i, n, q, u, v, a[MAX], b[MAX];

void Build_RMQ_Array(int *b)
{
	int i, j;
	for (i = 1; i <= n; i++) mas[i][0] = b[i];
	for (j = 1; 1 << j <= n; j++)
		for (i = 1; i + (1 << j) - 1 <= n; i++)
			mas[i][j] = min(mas[i][j - 1], mas[i + (1 << (j - 1))][j - 1]);
}

int query(int i, int j)
{
	int k = 0;
	while (1 << (k + 1) <= j - i + 1) k++;
	return min(mas[i][k], mas[j - (1 << k) + 1][k]);
}

int main() {
	scanf("%d %d", &n, &q);
	for (i = 1; i <= n; i++) scanf("%d", &b[i]);
	for (i = 1; i <= n; i++) a[b[i]] = i;
	Build_RMQ_Array(a);
	for (i = 0; i < q; i++)
	{
		scanf("%d %d", &u, &v);
		printf("%d\n", query(u, v));
	}
    return 0;
}    
	