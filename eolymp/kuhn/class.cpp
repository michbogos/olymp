#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<int> match;
vector<bool> used;
vector<int> alone;
vector<pair<int, int>> res;
vector<bool> saturated;

bool kuhn(int u, int m){
    if(used[u]) return false;
    used[u] = true;
    sort(g[u].begin(), g[u].end(), [](int x, int y){return alone[x] > alone[y];});
    for(int v : g[u]){
        if(match[v-m] == -1 || kuhn(match[v], m)){
            match[v-m] = u;
            res.push_back({v, u});
            saturated[v] = true;
            saturated[u] = true;
            return true;
        }
    }
    return false;
}

int main(){
    int m, k, n;
    cin >> m >> k >> n;
    alone.resize(m+k);
    alone.assign(m+k, 0);
    saturated.resize(m+k);
    saturated.assign(m+k, false);
    g.resize(m);
    for(int i = 0; i < m; i++){
        for(int j = m; j < m+k; j++){
            g[i].push_back(j);
        }
    }
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        auto res = find(g[u].begin(), g[u].end(), v);
        if(res != g[u].end()){
            g[u].erase(res);
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int idx;
        cin >> idx;
        idx --;
        alone[idx] = 1;
    }
    vector<int> aux(g.size());
    for(int i = 0; i < g.size(); i++){
        aux[i] = i;
    }
    sort(aux.begin(), aux.end(), [] (int x, int y){return alone[x] > alone[y];});
    match.resize(k);
    match.assign(k, -1);
    for(int idx : aux){
        used.assign(g.size(), false);
        kuhn(idx, m);
    }

    
    auto mt = match;
    auto gg = g;

    for(int i = 0; i < alone.size(); i++){
        if(alone[i] == 1 && !saturated[i]){
            cout << "NO\n";
            return 0;
        }
    }

    auto al = alone;
    auto sat = saturated;

    sort(res.begin(), res.end(), [](pair<int, int> x, pair<int, int> y){return (alone[x.first] + alone[x.second]) > (alone[y.first]+alone[y.second]);});

    cout << "YES\n";
    for(int i = 0; i < n; i++){
        cout << res[i].second+1 << " " << res[i].first+1 << "\n";
    }
    return 0;
}