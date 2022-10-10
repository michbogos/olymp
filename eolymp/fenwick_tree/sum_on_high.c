#include<stdio.h>

long fenwick[1000002];
long N = 1000002;

int sum(int i)
{
	int result = 0;
	for (; i >= 0; i = (i & i + 1) - 1) result += fenwick[i];
	return result;
}
void update(int i, int delta)
{
	for (; i < N; i = (i | i + 1)) fenwick[i] += delta;
}


int main(){
      int n;
      int m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        char c;
        scanf(" %c", &c);
        if(c == 'A'){
              int l;
              int r;
              int delta;
            scanf("%d %d %d", &l, &r, &delta);
            update(l, delta);
            update(r+1, -1*delta);
        }
        else if(c == 'Q'){
            int idx;
            scanf("%d", &idx);
            printf("%d", sum(idx));
        }
    }
    return 0;
}