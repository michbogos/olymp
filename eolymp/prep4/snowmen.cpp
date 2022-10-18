#include <iostream>

struct Snowman
{
	int Parent, Weight;
};
Snowman snowmen[200001];

int i, n, t, m;
long sum;

int main()
{
	scanf("%d", &n); sum = 0;
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &t, &m);
		if (m > 0)
		{
			snowmen[i].Parent = t;
			snowmen[i].Weight = snowmen[t].Weight + m;
		}
		else snowmen[i] = snowmen[snowmen[t].Parent];
		sum += snowmen[i].Weight;
	}
	printf("%ld\n", sum);
	return 0;
}