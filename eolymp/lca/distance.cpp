#include<iostream>
#include<vector>
#define LOGMAX 20

using namespace std;

int t = 0;
vector<vector<pair<int, int>>> g(150001);
vector<vector<int>> up(150001, vector<int>(LOGMAX+1, 0));
vector<int> enter(150001);
vector<int> leave(150001);
vector<int> d(150001);

void dfs(int u, int p, int dist){
    d[u] = dist;
    enter[u] = t++;
    up[u][0] = p;
    for(int i = 1; i <= LOGMAX; i++){
        up[u][i] = up[up[u][i-1]][i-1];
    }
    for(int i = 0 ; i < g[u].size(); i++){
        if(g[u][i].first != p){
            dfs(g[u][i].first, u, dist + g[u][i].second);
        }
    }
    leave[u] = t++;
}

bool parent(int a, int b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

int lca(int a, int b){
    if(parent(a, b)) return a;
    if(parent(b, a)) return b;
    for(int i = LOGMAX; i >= 0; i--){
        if(!parent(up[a][i], b)) a = up[a][i];
    }
    return up[a][0];
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int u, v, t;
        cin >> u >> v >> t;
        g[u].push_back({v, t});
        g[v].push_back({u, t});
    }
    dfs(0, 0, 0);
    int num_q;
    cin >> num_q;
    for(int i = 0 ; i< num_q; i++){
        int u, v;
        cin >> u >> v;
        int common = lca(u, v);
        cout << d[u] - d[common] + d[v]-d[common] << "\n";
    }
    return 0;
}