#include<iostream>
#include<vector>

using namespace std;

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }

        if (d[v] == INF)
            break;

        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    adj.reserve(n-1);
    for(int i = 0; i < n-1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a-1].push_back({b, c});
    }
    vector<int> distance;
    vector<int> paths;
    dijkstra(0, distance, paths);
    cout << distance[3] << "\n";
    return 0;
}
