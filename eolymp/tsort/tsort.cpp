#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dfs(int n, vector<vector<int>> &g, vector<int> &visited, vector<int> &sorted){
    if(visited[n] == 2){
        return 0;
    }
    if(visited[n] == 1){
        cout << "-1\n";
        exit(0);
    }
    visited[n] = 1;
    for(int edge:g[n]){
        dfs(edge, g, visited, sorted);
    }
    visited[n] = 2;
    sorted.push_back(n);
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0 ; i < m; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
    }
    vector<int> visited(n, 0);
    vector<int> sorted;
    int count = n;

    bool flag = false;

    while(!flag){
        flag = false;
        for(int i = 0; i<n;i++){
            if(visited[i] != 2){
                dfs(i, g, visited, sorted);
                flag = true;
            }
        }
    }

    for(auto i = sorted.rbegin(); i != sorted.rend();i++){
        cout << *i+1 << " ";
    }

    return 0;
}