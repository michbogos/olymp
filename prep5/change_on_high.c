#include <stdio.h>

#define MAX 1000001

int d, f, i, j, n, q, t, l, r,value, Fenwick[MAX];
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
		if (c == 'A')
		{
			scanf("%d %d %d\n", &l, &r, &d);
			IncElement(l-1, d);
            IncElement(r, -d);
		}
		else
		{
			scanf("%d\n", &f);
			printf("%d\n", sum(f));
		}
	}
	return 0;
}