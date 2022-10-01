#include <stdio.h>

#define NUMS_MAX 1000001
#define MAX 100001

int d, f, i, j, n, q, t, value, fenwick[MAX], nums[NUMS_MAX];
char c;
int sum(int i)
{
	int result = 0;
	for (; i >= 0; i = (i & i + 1) - 1) result += fenwick[i];
	return result;
}

int sum_nums(int i)
{
	int result = 0;
	for (; i >= 0; i = (i & i + 1) - 1) result += nums[i];
	return result;
}

void inc_element(int i, int delta)
{
	for (; i < MAX; i = (i | i + 1)) fenwick[i] += delta;
}

void inc_element_nums(int i, int delta)
{
	for (; i < MAX; i = (i | i + 1)) nums[i] += delta;
}


int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        fenwick[MAX];
        nums[NUMS_MAX];
        int n;
        scanf("%d", &n);
        for(int j = 1; j<= n; j++){
            int num;
            scanf("%d", &num);
            inc_element(j, num);
            inc_element_nums(j, j);
            printf("%d\n", sum(j) + sum_nums(j-1));
        }
        printf("updated\n");
	}
	return 0;
}