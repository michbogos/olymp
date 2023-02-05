#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<vector<pair<int, int>> > graph;
vector<int> used, d, up;
int i, n, m, a, b, tm;

set<int> res;

void dfs (int v, int p = -1) // NOLINT(misc-no-recursion)
{
    int i, to;
    used[v] = 1;
    d[v] = up[v] = tm++;
    for (i = 0; i < graph[v].size(); i++)
    {
        to = graph[v][i].first;
        if (to == p)  continue;
        if (used[to]) {
            up[v] = min(up[v], d[to]);
        }
        else
        {
            dfs (to, v);
            up[v] = min (up[v], up[to]);
            if (up[to] > d[v]) {
                res.insert(graph[v][i].second);
            }
        }
    }
}

int main(){
    cin >> n >> m;
    graph.resize(n+1);
    used.resize(n+1);
    d.resize(n+1);
    up.resize(n+1);
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(make_pair(v,i));
        graph[v].push_back(make_pair(u,i));
    }
    tm = 1;
    for(i = 1; i <= n; i++){
        if(!used[i]){
            dfs(i);
        }
    }
    cout << res.size() << "\n";
    for(int i : res){
        cout << i << "\n";
    }
}