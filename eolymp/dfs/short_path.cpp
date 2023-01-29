#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    queue<int> q;
    vector<int> layer(n);
    vector<bool> used(n, false);
    int count = 0;
    q.push(0);
    layer[0] = 0;
    while(!q.empty()){
        int from = q.front();
        q.pop();
        used[from] = true;
        if(layer[from] >= 2 && g[from].size() > 0){
            count ++;
        }
        for(int to : g[from]){
            if(!used[to]){
                layer[to] = layer[from]+1;
                q.push(to);
            }
        }
    }
    cout << count;
}