#include<vector>
#include<iostream>
#include<queue>
#include<iomanip>
#define LOGMAX 20

using namespace std;

int t;
vector<vector<int>> g(150000);
vector<vector<int>> up();
vector<int> enter;
vector<int> leave;
vector<int> lvl;

void dfs(int u, int p){
    enter.at(u) = t++;
    up.at(u).at(0) = p;
    for(int i = 1; i <= LOGMAX; i++){
        up.at(u).at(i) = up.at(up.at(u).at(i-1)).at(i-1);
    }
    for(auto v : g[u]){
        if(v!=p){
            dfs(v, u);
        }
    }
    leave[u] = t++;
    return;
}

bool parent(int a, int b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

int lca(int a, int b){
    if(parent(a, b)) return a;
    if(parent(b, a)) return b;
    for(int i = LOGMAX; i >= 0; i--){
        if(!parent(up[a][i-1], b)) a = up[a][i-1];
    }
    return up[a][0];
}

int main(){
    int n;
    float p;
    cin >> n >> p;
    g.resize(n);
    vector<vector<int>> up(n, vector<int>(LOGMAX+1, 0));
    lvl.resize(n);
    enter.resize(n);
    leave.resize(n);
    for(int i = 0; i < n; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(0);
    lvl[0] = 0;
    vector<bool> visited(n, false);
    visited[0] = true;
    while(!q.empty()){
        int u = q.front();
        visited[u] = true;
        q.pop();
        for(int v : g[u]){
            if(!visited[v]){
            lvl[v] = lvl[u] + 1;
            q.push(v);
            }
        }
    }
    dfs(0, 0);
    int queries;
    cin >> queries;
    for(int i = 0 ; i < queries; i++){
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        int common = lca(c, d);
        if(lvl[c]-lvl[common] == lvl[d]-lvl[common]){
            float res = p*(float)lvl[c]-(float)lvl[common] + p*(float)lvl[common];
            cout << fixed << setprecision(5) << res << " " << res;
        }
        else{
            cout << fixed << setprecision(5) << p*(float)lvl[c] << p*(float)lvl[d];
        }
    }
    return 0;
}