#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<int> used;

int dfs(int u){
    used[u] = 1;
    int count = 0;
    for(int v : g[u]){
        if(!used[v]) count += dfs(v);
    }
    return max(count, 1);
}

int main(){
    int n, m;
    while(cin >> n >> m){
        g.resize(n);
        used.resize(n, 0);
        used.assign(n, 0);
        g.assign(n, vector<int>());
        for(int i =0 ; i < m; i++){
            int u, v;
            cin >> u >> v;
            u --;
            v --;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int ans = 0;
        int ans1 = 0;
        for(int i = 0; i < n; i ++){
            if(!used[i]){
                ans = dfs(i);
                ans1 = max(ans, ans1);
            }
        }
        if(ans1 >= 4){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}