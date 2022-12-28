#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, f, s, m;
    cin >> n >> m;
    cin >> s >> f;
    s --;
    f --;
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    q.push(s);
    vector<bool> visited(n, false);
    vector<int> dist(n, 0);
    vector<int> parent(n, -1);
    dist[s] = 0;
    visited[s] = true;
    int count = 0;
    while(!q.empty()){
        int vert = q.front();
        q.pop();
        count ++;
        for(int v : g[vert]){
            if(!visited[v]){
                visited[v] = true;
                dist[v] = dist[vert] + 1;
                parent[v] = vert;
                q.push(v);
            }
        }
    }
    if(dist[f]==0){
        cout << -1;
    }
    else{
        cout << dist[f] << "\n";
        int vert = f;
        vector<int> path;
        while(vert != -1){
            path.push_back(vert);
            vert = parent[vert];
        }
        reverse(path.begin(), path.end());
        for(int i : path){
            cout << i+1 << " ";
        }
    }
    return 0;
}