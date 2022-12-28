#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    int n, f, s;
    cin >> n >> s >> f;
    s --;
    f --;
    vector<vector<int>> g(n);
    for(int u = 0; u < n; u++){
        for(int v = 0; v < n; v++){
            int num;
            cin >> num;
            if(num == 1){
                g[u].push_back(v);
            }
        }
    }
    queue<int> q;
    q.push(s);
    vector<bool> visited(n, false);
    vector<int> dist(n, 0);
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
                q.push(v);
            }
        }
    }
    cout << dist[f];
    return 0;
}