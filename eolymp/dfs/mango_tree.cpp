#include<iostream>
#include<vector>

using namespace std;

vector<int> cnt;
vector<vector<int>> g;
int v, u;

bool dfs(int a=u, int p=-1){
    bool found = false;
    cnt[a] = 1;
    for(int b : g[a]){
        if(b == p) continue;
        bool res = dfs(b,a);
        found |= res;
        if(!res) cnt[a] += cnt[b];
    }
    return found|(a == v);
}

int main(){
    int n;
    cin >> n >> u >> v;
    g.resize(n+1);
    cnt.resize(n+1, 0);
    for(int i = 1; i <= n-1; i++){
        int from, to;
        cin >> from >> to;
        g[from].push_back(to);
        g[to].push_back(from);
    }
    dfs();
    long long all = n*1ll*(n-1);
    long long invalid = cnt[u]*1ll*cnt[v];
    cout << all-invalid;
    return 0;
}