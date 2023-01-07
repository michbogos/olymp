#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<vector<int>> g, gt;
vector<int> used;
vector<int> components;
vector<int> order;
int color = 0;

void dfs1(int u){
    used[u] = true;
    for(int v : g[u]){
        if(!used[v]){
            dfs1(v);
        }
    }
    order.push_back(u);
}

void dfs2(int u){
    components[u] = color;
    used[u] = true;
    for(int v : gt[u]){
        if(!used[v]) dfs2(v);
    }
}

int main(){
    int n, m;
    cin >> n;
    used.assign(n, false);
    g.resize(n);
    gt.resize(n);
    components.assign(n, -1);
    cin >> m;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(v);
        gt[v].push_back(u);
    }
    for(int i = 0; i < n; i++){
        if(!used[i]){
            dfs1(i);
        }
    }
    used.assign(n, false);
    for(int i = n-1; i >= 0; i--){
        if(!used[i]){
            dfs2(i);
            color ++;
        }
    }
    unordered_set<int> us;
    vector<int> resvec;
    for(int i = 0; i < n ;i++){
        if(us.count(components[i]) == 0){
            us.insert(components[i]);
            resvec.push_back(i);
        }
    }
    cout << us.size() << "\n";
    for(int i : resvec){
        cout << i+1 << " ";
    }
    cout << "\n";
    return 0;
}