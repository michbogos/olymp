#include<iostream>
#include<vector>
#define MOD 1000000000

using namespace std;

vector<vector<pair<int, int>>> g;
vector<bool> used;
unsigned long long res = 0;
int n;

// int get_subtree_size(int u){
//     used[u] = true;
//     res = 1;
//     for(pair<int, int> v : g[u]){
//         int to = v.first;
//         if(!used[to]){
//             res += get_subtree_size(to);
//         }
//     }
//     subtree_size[u] = res;
//     return res;
// }

int dfs(int u){
    int cnt = 1;
    used[u] = true;
    for (int i = 0; i < g[u].size(); i++){
        int to = g[u][i].first;
        unsigned long long weight = g[u][i].second;
        if(!used[to]){
            unsigned long long c = dfs(to);
            res = (res + (weight * (n-c) * c))%MOD;
            cnt += c;
        }
    }
    return cnt;
}

int main(){
    cin >> n;
    g.resize(n);
    used.resize(n);
    used.assign(n, false);
    for(int i = 0; i < n-1; i ++){
        int u, v, t;
        cin >> u >> v >> t;
        v --;
        u --;
        g[u].push_back({v, t});
        g[v].push_back({u, t});
    }
    // get_subtree_size(0);
    // auto st = subtree_size;
    dfs(0);
    cout << res;
    return 0;
}