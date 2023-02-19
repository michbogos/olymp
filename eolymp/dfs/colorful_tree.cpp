#include<vector>
#include<stack>
#include<iostream>

using namespace std;

vector<vector<int>> g;
vector<int> colors;
vector<stack<int>> stk;
vector<int> res;

void dfs(int u, int p=-1){
    if(stk[colors[u]].empty()) res[u] = -1;
    else res[u] = stk[colors[u]].top();
    stk[colors[u]].push(u);
    for(int to : g[u]){
        if(to != p){
            dfs(to, u);
        }
    }
    stk[colors[u]].pop();
}

int main(){
    int n, c;
    cin >> n >> c;
    g.resize(n+1);
    res.resize(n+1);
    res.assign(n+1, -1);
    colors.resize(n+1);
    stk.resize(c+1);
    for(int i = 2; i <= n; i++){
        int j;
        cin >> j;
        g[j].push_back(i);
    }
    for(int i = 1; i <= n; i++){
        cin >> colors[i];
    }
    dfs(1);
    for(int i = 1; i <= n; i++){
        cout << res[i] << " ";
    }
    return 0;
}
