#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<int> match;
vector<bool> used;
int n;

bool kuhn(int u){
    if(used[u]) return false;
    used[u] = true;
    for(int v : g[u]){
        if(match[v-n] == -1 || kuhn(match[v-n])){
            match[v-n] = u;
            return true;
        }
    }
    return false;
}

int main(){
    int k;
    cin >> n >> k;
    //vector<vector<int>> aux(n);
    g.resize(n);
    match.resize(n);
    match.assign(n, -1);
    used.resize(n);
    for(int i = 0; i < k; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        g[u].push_back(n+v);
    }
    for(int i = 0; i < n; i++){
        used.assign(n, false);
        kuhn(i);
    }
    auto mt = match;
    auto gg = g;
    cout << n-(count_if(match.begin(), match.end(), [](int element){return (element != -1);}));
    return 0;
}