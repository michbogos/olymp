#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> gd;
vector<vector<int>> gs;
vector<int> color;

bool flag = true;

void dfs(int u, int col){
    color[u] = col;
    for(int v : gs[u]){
        if(color[v] == 3-col){
            cout << 0;
            exit(0);
        }
        if(color[v] == 0) dfs(v, col);
    }
    for(int v : gd[u]){
        if(color[v] == col){
            cout << 0;
            exit(0);
        }
        if(color[v] == 0) dfs(v, 3-col);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    gs.resize(n);
    gd.resize(n);
    color.resize(n, 0);
    for(int i = 0; i < k; i++){
        char c;
        int u, v;
        cin >> c >> u >> v;
        u --;
        v --;
        if(c == 'D'){
            gd[u].push_back(v);
            gd[v].push_back(u);
        }
        if(c == 'S'){
            gs[u].push_back(v);
            gs[v].push_back(u);
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(color[i] == 0){
            dfs(i, 1);
            res ++;
        }
    }
    cout << "1";
    for(int i = 0; i < res; i++){
        cout << "0";
    }
    cout << "\n";
    return 0;
}