#include<iostream>
#include<vector>
#define LOGMAX 16

using namespace std;

int t = 0;
vector<vector<int>> g(50001);
vector<vector<int>> up(50001, vector<int>(LOGMAX+1, 0));
vector<int> enter(50001);
vector<int> leave(50001);

void dfs(int u, int p){
    enter[u] = t++;
    up[u][0] = p;
    for(int i = 1; i <= LOGMAX; i++){
        up[u][i] = up[up[u][i-1]][i-1];
    }
    for(int v : g[u]){
        if(v != u && v != 0){
            dfs(v, u);
        }
    }
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
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        g[num].push_back(i);
        g[i].push_back(i);
    }
    return 0;
}