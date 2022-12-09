#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dfs(int n, vector<vector<int>> &g, vector<int> &visited, vector<int> &sorted){
    if(visited[n] == 2){
        return 0;
    }
    if(visited[n] == 1){
        cout << "NO\n";
        return;
        //exit(0);
    }
    visited[n] = 1;
    for(int edge:g[n]){
        dfs(edge, g, visited, sorted);
    }
    visited[n] = 2;
    sorted.push_back(n);
    cout << "YES\n";
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<pair<int, int>> undirected;
    for(int i = 0 ; i < m; i++){
        int d, u, v;
        cin >> d >> u >> v;
        u --;
        v --;
        if(d){
            g[u].push_back(v);
        }
        else{
            undirected.push_back({u, v});
        }
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

    reverse(sorted.begin(), sorted.end());

    for(auto edge: undirected){
        if(sorted[])
    }
    return 0;
}