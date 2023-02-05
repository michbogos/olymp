#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
vector<int> up;
vector<int> d;
set<int> res;
int t = 0;

void dfs(int u, int p=-1){
    int children = 0;
    used[u] = true;
    t ++;
    d[u] = t;
    up[u] = t;
    for(int v : g[u]){
        if(v==p) continue;
        if(used[v]){
            up[u] = min(up[u], d[v]);
        }
        else{
            children++;
            dfs(v, u);
            up[u] = min(up[u], up[v]);
            if(up[v] >= d[u]){
                if(p != -1) res.insert(u);
            }
        }
    }
    if(p == -1){
        if(children > 1){
            res.insert(u);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    g.resize(n);
    used.resize(n);
    used.assign(n, false);
    up.resize(n);
    d.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i = 0; i < n; i++){
        if(!used[i]) dfs(i);
    }
    cout << res.size() << "\n";
    for(int element : res){
        cout << element+1 << "\n";
    }
    return 0;
}