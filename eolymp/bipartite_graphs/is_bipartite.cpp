#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<int> color;

bool flag = true;

void dfs(int u, int c){
    color[u] = c;
    for(int v : g[u]){
        if(color[v] == c){
            flag = false;
            return;
        }
        if(color[v] == 0){
            dfs(v, 3-c);
        }
    }
}

int main(){
    for(;;){
        flag = true;
        int n, m;
        cin >> n;
        color.clear();
        color.resize(n, 0);
        g.clear();
        g.resize(n);
        if(n == 0){
            exit(0);
        }
        cin >> m;
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            g[u-1].push_back(v-1);
            g[v-1].push_back(u-1);
        }
        dfs(0, 1);
        cout << (flag ? "BICOLOURABLE.\n" : "NOT BICOLOURABLE.\n");
    }
    return 0;
}