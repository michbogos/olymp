#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
int t;
vector<int> d;
vector<int> up;
map<pair<int, int>, int> mp;
vector<int> res;

void dfs(int v, int p=-1){
    used[v] = true;
    d[v] = t++;
    up[v] = t;
    for(int to : g[v]){
        if(to == p) continue;
        if(used[to]) up[v] = min(up[v], d[to]);
        else{
            dfs(to, v);
            up[v] = min(up[v], up[to]);
            if(up[to] > d[v]){
                if(mp.count({to, v})!=0){
                    res.push_back(mp[{to, v}]);
                }
                else{
                    res.push_back(mp[{v, to}]);
                }
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    g.resize(n);
    used.resize(n);
    used.assign(n, false);
    d.resize(n);
    up.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        mp.insert({{u, v}, i+1});
        g[u].push_back(v);
        g[v].push_back(u);
    }
    t = 1;
    for(int i = 0; i < g.size(); i++){
        if(!used[i]) dfs(i);
    }
    cout << res.size() << "\n";
    for(int i : res){
        cout << i << "\n";
    }
}