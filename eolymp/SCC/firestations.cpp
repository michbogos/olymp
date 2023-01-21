#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

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
    reverse(order.begin(), order.end());

    for(auto i : order){
        if(!used[i]){
            dfs2(i);
            color ++;
        }
    }
    vector<bool> hasin(color, true);
    vector<bool> hasout(color, true);
    for(int i=0; i< g.size(); i++){
        for(int u = 0; u < g[i].size(); u++){
            if(components[i] != components[u]){
                hasin[components[i]] = false;
            }
        }
    }

    for(int i=0; i< gt.size(); i++){
        for(int u = 0; u < gt[i].size(); u++){
            if(components[i] != components[u]){
                hasout[components[i]] = false;
            }
        }
    }
    int count = 0;
    vector<bool> include(color, false);
    for(int i = 0; i < hasin.size(); i++){
        if(hasin[i] != hasout[i]){
            count ++;
            include[i] = true;
        }
    }
    cout << count << "\n";
    set<int> unique;
    for(int i  = 0; i < components.size(); i++){
        if(include[components[i]] && unique.count(components[i]) == 0){
            cout << i+1 << " ";
        }
    }
    return 0;
}