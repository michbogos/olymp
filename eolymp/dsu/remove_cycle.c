#include<stdio.h>
#include<string.h>

int get(int x, int parent[]){
    if(parent[x] == x){
        return x;
    }
    else{
        return get(parent[x], parent);
    }
}

void unite(int x, int y, int parent[]){
    int x1 = get(x, parent);
    int y1 = get(y, parent);
    if (x1 == y1) return;
    parent[x1] = y1;
}

int main(){
    int t;
    int q;
    scanf("%d", &q);
    for(int t = 1; t < q+1; t++){
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int parent[n];
        for(int i = 0; i < n; i++){
            parent[i] = i;
        }
        int count = 0;
        for(int i = 0 ; i < m; i++){
            int u, v;
            scanf("%d %d", &u, &v);
            if(u >= k || v >= k){
                if(get(u, parent) == get(v, parent)){
                    count ++;
                }
                else{
                    unite(u,v, parent);
                }
            }
            else{
                unite(u,v, parent);
            }
        }
        printf("Case %d: %d" ,t, count-1);
    }
    return 0;
}