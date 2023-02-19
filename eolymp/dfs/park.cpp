#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<bool> has;
vector<int> cnt;
vector<bool> isValid;
int res = 0;
int m;

void dfs(int u, int p=0){
    if(has[u]) cnt[u]=cnt[p]+1;
    else cnt[u] = 0;

    if(cnt[u]>m) isValid[u] = false;
    if(!isValid[p]) isValid[u] = false;
    if(g[u].size()== 1 && u != 1 && isValid[u]) res ++;
    for(int v : g[u]){
        if(v == p) continue;
        dfs(v, u);
    }
}

int main(){
    int n;
    cin >> n >> m;
    g.resize(n+1);
    has.resize(n+1, false);
    cnt.resize(n+1, 0);
    isValid.resize(n+1, true);
    for(int i = 1; i < n+1; i++){
        int num;
        cin >> num;
        if(num > 0){
            has[i] = true;
        }
        else{
            has[i] = false;
        }
    }
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    cout << res;
    return 0;
}