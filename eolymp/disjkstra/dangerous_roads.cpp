#include<iostream>
#include<queue>
#include<vector>
#define INF 1000000001

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> g(n);
    for(int i = 0 ; i < m; i++){
        int u, v, t;
        cin >> u >> v >> t;
        u --;
        v --;
        g[u].push_back({v, t});
        g[v].push_back({u, t});
    }
    vector<int> distance(n, INF);
    distance[0] = 0;
    priority_queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        for(auto v : g[u]){
            if(distance[v.first]>max(distance[u], v.second)){
                distance[v.first] = max(distance[u], v.second);
                q.push({distance[v.first], v.first});
            }
        }
    }
    cout << distance[n-1] << endl;
    return 0;
}