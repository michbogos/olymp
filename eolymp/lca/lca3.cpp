#include<iostream>
#include<vector>
#define LOGMAX 20

using namespace std;

int t = 0;
vector<vector<int>> g(50001);
vector<vector<int>> up(50001, vector<int>(LOGMAX+1, 0));
vector<int> dsu(50001, 0);
vector<int> enter(50001);
vector<int> leave(50001);

void dfs(int u, int p){
    enter[u] = t++;
    up[u][0] = p;
    for(int i = 1; i <= LOGMAX; i++){
        up[u][i] = up[up[u][i-1]][i-1];
    }
    for(int v : g[u]){
        if(v != p && v != 0){
            dfs(v, u);
        }
    }
}

bool parent(int a, int b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

int lca(int a, int b){
    if(parent(a, b)) return a;
    if(parent(b, a)) return b;
    for(int i = LOGMAX; i >= 0; i--){
        if(!parent(up[a][i], b)) a = up[a][i];
    }
    return up[a][0];
}

int get(int x){
    if(dsu[x] == x){
        return x;
    }
    else{
        return get(dsu[x]);
    }
}

void unite(int x, int y){
    int x1 = get(x);
    int y1 = get(y);
    if (x1 == y1) return;
    dsu[x1] = y1;
}

void join(int u, int v){
    g[u].push_back(v);
    g[v].push_back(u);
    unite(u, v);
    dfs(u, v);
}

int main(){
    for(int i = 1; i <= 50001; i++){
        dsu[i] = i;
    }
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        if(num == 0) continue;
        g[num].push_back(i);
        g[i].push_back(i);
    }
    int k;
    cin >> k;
    for(int i = 0 ; i < k; i++){
        int command, x, y;
        cin >> command >> x >> y;
        if(command == 0){
            int u = (x-1-ans)%n+1;
            int v = (y-1+ans)%n+1;
            if(get(u) == get(v)){
                ans = lca(u, v);
                cout << ans;
            }
            else{
                ans = 0;
                cout << 0;
            }
        }
        else{
            int u = (x-1+ans)%n+1;
            int v = (y-1+ans)%n+1;
            join(u, v);
        }
    }
    return 0;
}