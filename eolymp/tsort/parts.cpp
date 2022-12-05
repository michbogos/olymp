#include <bits/stdc++.h>
#include<stdio.h>
#define MAX 100010
using namespace std;
long long p[MAX], res;
int used[MAX];
vector<vector<int> > g;
int i, n, a;
char ch, s[10*MAX];
long long dfs(int v)
{
used[v] = 1;
long long res = p[v];
for (int i = 0; i < g[v].size(); i++)
{
int to = g[v][i];
if (!used[to]) res += dfs(to);
}
return res;}
int main(void)
{
n = 1;
while(scanf("%lld%c",&p[n],&ch),ch!='\n')
n++;
g.resize(n+1);
for(i = 1; i <= n; i++)
{
gets(s);
stringstream in(s);
while (in >> a) g[i].push_back(a);
// put reverse edge i -> a
}
res = dfs(1);
printf("%lld\n",res);
return 0;
}