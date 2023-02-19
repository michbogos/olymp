#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<vector<int>> g;
vector<int> d;
vector<int> f;
vector<int> p;

void dfs(int u, int parent=0, int layer=0){
    d[u] = layer;
    if(g[u].size() == 1 && u != 1){
        f[u] = 200000000;
    }
    for(int v : g[u]){
        if(v==parent)continue;
        dfs(v, u, layer+1);
        f[u] = min(f[u], f[v]);
    }
    f[u] += 1;
}

void dfs2(int u, int parent=0){
    int s = 0;
    for(int v : g[u]){
        if(v == parent) continue;
        dfs2(v, u);
        s += p[v];
    }
    if(d[u] >= f[u]) p[u] = 1;
    else p[u] = s;
}

int main(){
    int n;
    cin >> n;
    g.resize(n+1);
    d.resize(n+1, 0);
    f.resize(n+1, 0);
    p.resize(n+1, 0);
    for(int i = 1; i <= n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    dfs2(1);
    cout << p[1];
    auto pp = p;
    auto ff = f;
    auto dd = d;
    return 0;
}