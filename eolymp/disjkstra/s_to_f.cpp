#include<iostream>
#include<set>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int n, s, f;
    cin >> n >> s >> f;
    s -= 1;
    f -= 1;
    vector<vector<pair<int, int>>> g(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> d;
    for(int i = 0 ; i < n; i ++){
        for(int j = 0 ; j < n; j++){
            int num;
            cin >> num;
            if(num > 0){
                g[i].push_back({j, num});
            }
        }
    }
    vector<int> dist(n, 1000000000);
    dist[s] = 0;
    d.push({0, s});
    vector<int> marked(n, false);

    while(!d.empty()){
        int u = d.top().second;
        d.pop();
        for(auto v:g[u]){
            if(dist[v.first] > dist[u]+v.second){
                d.push({dist[u] + v.second, v.first});
                dist[v.first] = dist[u] + v.second;
            }
        }
    }
    if(dist[f] == 1000000000){
        cout << -1;
    }
    else{
    cout << dist[f];
    }
    return 0;
}