#include<iostream>
#include<vector>

using namespace std;

#define MOD 1000000007

vector<vector<int>> g;
int k;

long long dfs(int v, int color, int p = -1){
    long long res = color;
    int used = 1;
    if(p >= 0) used ++;
    for(int i = 0; i < g[v].size(); i++){
        int to = g[v][i];
        if(to == p) continue;
        res = (res * dfs(to, k-used, v)) % MOD;
        used ++;
    }
    return res;
}

int main(){
    int n;
    cin >> n >> k;
    g.resize(n);
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //auto gg = g;
    //auto u = used;
    long long res = dfs(0, k);
    cout << res;
    return 0;
}