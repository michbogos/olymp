#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> g;
vector<int> used;
vector<int> res;
int cnt = 0;

void dfs(int u){
    cnt++;
    used[u]++;
    for(int v : g[u]){
        if(used[v] == 0){
            dfs(v);
        }
    }
}

int main(){
    int n;
    cin >> n;
    g.resize(n);
    used.resize(n);
    res.resize(n, 1);
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 1; i < n; i++){
        g[a[i].second].push_back(a[i-1].second);
        g[b[i].second].push_back(b[i-1].second);
    }
    used.assign(n, 0);
    for(auto p : a){
        if(!used[p.second]){
            dfs(p.second);
        }
        res[p.second] = cnt-1;
    }
    for(int i = 0; i < n; i++){
        cout << res[i] << "\n";
    }
    return 0;
}