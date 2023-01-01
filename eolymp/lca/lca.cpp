#include<iostream>
#include<vector>
#include<string>

using namespace std;

int t;
vector<vector<int>> g(10000);
vector<vector<int>> up(10000, vector<int>(13, 1));
vector<int> enter(10001);
vector<int> leave(10001);

void dfs(int u, int ancestor){
    enter[u] = t++;
    up[u][0] = ancestor;
    for(int i = 1; i <= 12; i++)
        up[u][i] = up[up[u][i-1]][i-1];
    for(int v : g[u]){
        if(v != ancestor){
        dfs(v, u);}
    }
    leave[u] = t++;
}

bool parent(int a, int b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

int lca(int a, int b){
    if(parent(a, b)) return a;
    if(parent(b, a))return b;
    for(int i = 12; i >= 0; i--){
        if(!parent(up[a][i], b)){
            a = up[a][i];
        }
    }
    return up[a][0];
}

int main(){
    int k;
    cin >> k;
    int t = 0;
    vector<pair<int, int>> GET;
    while(k--){
        string s;
        int a, b;
        cin >> s >> a >> b;
        if(s == "ADD"){
            g[a].push_back(b);
        }
        else{
            GET.push_back({a, b});
        }
    }
    dfs(1, 1);
    for(auto q : GET){
        cout << lca(q.first, q.second) << "\n";
    }
    return 0;
}