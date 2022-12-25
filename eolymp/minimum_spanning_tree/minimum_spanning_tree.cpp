#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct{
    int u;
    int v;
    int t;
} Edge;
int repr(int i, vector<int> &dsu){
    if(dsu[i] == i) return i;
    else return dsu[i] = repr(dsu[i], dsu);
}
void unite(int i, int j, vector<int> &dsu){
    int x = repr(i, dsu);
    int y = repr(j, dsu);
    if(x == y)return;
    else{
        if(x > y){
        dsu[y] = x;
            return;
        }
        else{
            dsu[x] = y;
            return;
        }
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<pair<int, pair<int, int>>> edges(m);
    vector<int> dsu(n);
    for(int i = 0 ; i < n; i++){
        dsu[i] = i;
    }
    for(int i = 0; i < m; i++){
        int u, v, t;
        scanf("%d %d %d", &u, &v, &t);
        edges[i]={t, {v-1, u-1}};
    }
    sort(edges.begin(), edges.end());
    unsigned long long count = 0;
    for(int i = 0; i < m; i++){
        if(repr(edges[i].second.first, dsu) != repr(edges[i].second.second, dsu)){
            count += edges[i].first;
            unite(edges[i].second.first, edges[i].second.second, dsu);
        }
    }
    printf("%llu\n", count);
    return 0;
}