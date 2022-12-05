#include<stdio.h>

#define MAX 1000000000

int Repr(int v, int parent[])
{
if (v == parent[v]) return v;
return parent[v] = Repr(parent[v], parent);
}

void Union(int x, int y, int parent[])
{
int x1 = Repr(x, parent), y1 = Repr(y, parent);
if (x1 == y1) return;
parent[x1] = y1;
}



int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int parent[n];
    for(int i = 0 ; i < n; i++){
        parent[i] = i;
    }
    int u, v;
    scanf("%d %d", &u, &v);
    u --;
    v --;
    parent[u] = u;
    Union(u, v, parent);
    for(int i = 1 ; i < m; i++){
        scanf("%d %d", &u, &v);
        u --;
        v --;
        Union(u, v, parent);
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(parent[i] == i){
            count ++;
        }
    }
    printf("%d\n", count-1);
}
