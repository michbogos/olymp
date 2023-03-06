#include<iostream>
#include<vector>
#include<queue>

#define INF INT32_MAX

using namespace std;
vector<vector<int>> cost;
vector<vector<int>> capacity;
vector<int> parent;
vector<int> d;

int n;
int s;
int t;

void dijkstra(){
    d.assign(d.size(), INF);
    priority_queue<pair<int, int>> q;
    q.push({0, s});
    while(!q.empty()){
        int u, dist;
        u = q.top().second;
        dist = q.top().first;
        q.pop();
        for(int v = 0 ; v < n; v++){
            if(capacity[u][v] > 0 && d[v] > d[u]+cost[u][v]){
                d[v] = d[u] + cost[u][v];
                parent[v] = u;
                q.push({d[v], v});
            }
        }
    }
}

int min_cost_flow(){
    int flow = 0;
    int cost = 0;
    while(flow < n){
        dijkstra();
        if(d[t]==INF) break;
        
        int f = n-flow;
        int current = t;
        while(current != s){
            f = min(f, capacity[parent[current]][current]);
            current = parent[current];
        }

        flow += f;
        cost += f * d[t];

        current = t;
        while (current != s) {
            capacity[parent[current]][current] -= f;
            capacity[current][parent[current]] += f;
            current = parent[current];
        }
    }
    if (flow < n)
        return -1;
    else return cost;
}

int main(){
    cin >> n;
    s = 2*n;
    t = 2*n+1;
    cost.resize(n*2+2);
    cost.assign(n*2+2, vector<int>(n*2+2, 0));
    capacity.resize(n*2+2);
    capacity.assign(n*2+2, vector<int>(n*2+2, 1));
    parent.resize(n*2+2);
    parent.assign(n*2+2, -1);
    d.resize(n*2+2);
    d.assign(n*2+2, INF);
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cost[i][j];
        }
    }
    cout << min_cost_flow();
    return 0;
}