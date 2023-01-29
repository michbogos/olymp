#include<iostream>
#include<vector>
#define MOD 1000000007
using namespace std;
vector<vector<int>> g;
vector<bool> used;
unsigned long long dfs(int u){
    unsigned long long res = 1;
    used[u] = true;
    for(int v : g[u]){
        if(!used[v]){
            int sub = dfs(v);
            res = (res * (sub+1)) % MOD;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    g.resize(n+1);
    used.resize(n+1);
    used.assign(n+1, false);
    for(int i = 1; i < n; i ++){
        int v;
        cin >> v;
        v --;
        g[v].push_back(i);
        g[i].push_back(v);
    }
    cout << dfs(0);
    return 0;
}