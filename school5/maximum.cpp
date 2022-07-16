#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100001
#define LOGMAX 17

int i, n, q, u, v, a[MAX], arr[MAX][LOGMAX];

void Build_RMQ_Array(int *b)
{
	int i, j;
	for (i = 1; i <= n; i++) arr[i][0] = b[i];
	for (j = 1; 1 << j <= n; j++)
		for (i = 1; i + (1 << j) - 1 <= n; i++)
			arr[i][j] = max(arr[i][j - 1], arr[i + (1 << (j - 1))][j - 1]);
}
int query(int i, int j)
{
	int temp, k = 0;
	if (i > j) temp = i, i = j, j = temp;
	while (1 << (k + 1) <= j - i + 1) k++;
	return max(arr[i][k], arr[j - (1 << k) + 1][k]);
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	Build_RMQ_Array(a);
	scanf("%d", &q);
	for (i = 0; i < q; i++)
	{
		scanf("%d %d", &u, &v);
		printf("%d\n", query(u, v));
	}
	return 0;
}