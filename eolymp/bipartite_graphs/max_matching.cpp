#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
vector<int> match;

bool dfs(int u){
    if(used[u]) return false;
    used[u] = true;
    for(int v : g[u]){
        if(match[v] == -1 || dfs(match[v])){
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    g.resize(n);
    for(int i = 0; i < k; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        // g[v].push_back(u);
    }
    match.resize(m);
    match.assign(m, -1);
    for(int i = 0; i < n; i++){
        used.assign(n, false);
        dfs(i);
    }
    vector<pair<int, int>> resvec;
    int count = 0;
    for(int i = 0; i < match.size(); i++){
        if(match[i] != -1){
            count ++;
            resvec.push_back({match[i]+1, i+1});
        }
    }
    cout << count << "\n";
    for(auto const &element : resvec){
        cout << element.first << " " << element.second << "\n";
    }
    return 0;
}