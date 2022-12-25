#include<stdio.h>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
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
    int n, m, p;
    set<int> dangerous;
    scanf("%d %d %d", &n, &m, &p);

    vector<pair<int, pair<int, int>>> edges(m);
    vector<pair<int, pair<int, int>>> dangerous_edges(p);
    vector<int> dsu(n);

    for(int i = 0; i < p; i++){
        int k;
        scanf("%d", &k);
        dangerous.insert(k-1);
    }
    for(int i = 0 ; i < n; i++){
        dsu[i] = i;
    }

    auto it = dangerous.begin();
    for(int i = 0; i < m; i++){
        int u, v, t;
        scanf("%d %d %d", &u, &v, &t);
        if(u-1 == *it || v-1 == *it){
            dangerous_edges.push_back({t, {v-1, u-1}});
            it = next(it);
        }
        else{
            edges[i]={t, {v-1, u-1}};
        }
    }
    sort(edges.begin(), edges.end());
    sort(dangerous_edges.begin(), dangerous_edges.end());
    unsigned long long count = 0;
    for(int i = 0; i < m; i++){
        if(repr(edges[i].second.first, dsu) != repr(edges[i].second.second, dsu)){
            unite(edges[i].second.first, edges[i].second.second, dsu);
            count += edges[i].first;
        }
    }
    for(int i = 0; i < p; i++){
        if(repr(dangerous_edges[i].second.first, dsu) != repr(dangerous_edges[i].second.second, dsu)){
            if(dangerous.find(dangerous_edges[i].second.first) != dangerous.end() || dangerous.find(dangerous_edges[i].second.second) != dangerous.end()){
                unite(dangerous_edges[i].second.first, dangerous_edges[i].second.second, dsu);
                count += dangerous_edges[i].first;
            }
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(repr(i, dsu) != repr(0, dsu)){
            printf("impossible\n");
            flag = false;
            break;
        }
    }
    if(flag){
        printf("%llu\n", count);
    }
    return 0;
}