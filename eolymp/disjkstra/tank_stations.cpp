#include<iostream>
#include<queue>
#include<vector>
#define INF 1000000000

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0 ; i < n; i++){
        cin >> prices[i];
    }
    cin >> m;
    vector<vector<int>> g(n);
    for(int i = 0 ; i<m;i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> distance(n, INF);
    distance[0] = 0;
    priority_queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        for(auto v: g[u]){
            if(distance[v] > distance[u]+prices[u]){
                q.push({distance[u]+prices[u], v});
                distance[v] = distance[u]+prices[u];
            }
        }
    }
    if(distance[n-1] == INF){
        cout << -1;
    }
    else{
        cout << distance[n-1];
    }
    return 0;
}