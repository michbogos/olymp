#include <stdio.h>

#define MAX 1000001

int d, f, i, j, n, q, t, value, Fenwick[MAX];
char c;
int sum(int i)
{
	int result = 0;
	for (; i >= 0; i = (i & i + 1) - 1) result += Fenwick[i];
	return result;
}
void IncElement(int i, int delta)
{
	for (; i < MAX; i = (i | i + 1)) Fenwick[i] += delta;
}

int main() {
	scanf("%d %d", &n, &q);
	for (i = 1; i <= n; i++) scanf("%d", &value), IncElement(i, value);
	scanf("\n");

	for (j = 0; j < q; j++)
	{
		scanf("%c ", &c);
		if (c == '+')
		{
			scanf("%d %d\n", &i, &d);
			IncElement(i, d);
		}
		else
		{
			scanf("%d %d\n", &f, &t);
			printf("%d\n", sum(t) - sum(f - 1));
		}
	}
	return 0;
}