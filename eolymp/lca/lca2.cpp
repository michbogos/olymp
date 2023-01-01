#include<iostream>
#include<vector>

using namespace std;

int t = 0;
vector<vector<int>> g(1001);
vector<int> enter(1001);
vector<int> leave(1001);
vector<vector<int>> up(1001, vector<int>(13, 0));

void dfs(int u, int parent){
    enter[u] = t++;
    up[u][0] = parent;
    for(int i = 1; i <= 12; i++){
        up[u][i] = up[up[u][i-1]][u-1];
    }
    for(auto v:g[u]){
        if(v!=parent){
            dfs(v, u);
        }
    }
    leave[u] = t++;
    return;
}

bool parent(int a, int b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

int lca(int a, int b){
    if(parent(a, b)) return a;
    if(parent(b, a)) return b;
    for(int i = 12; i >= 0; i--){
        if(!parent(up[a][i], b)){
            a = up[a][i];
        }
    }
    return up[a][0];
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i < n; i++){
        int num;
        cin >> num;
        g[num].push_back(i);
    }
    dfs(0, 0);
    int a1, a2, x, y, z;
    cin >> a1 >> a2;
    cin >> x >> y >> z;
    vector<pair<int, int>> queries(m);
    vector<int> a;
    a.push_back(a1);
    a.push_back(a2);
    for(int i = 2; i < 2*m; i++){
        a.push_back((a[i-2]*x + y*a[i-1]+z)%n);
    }
    int v = lca(a1, a2);
    int s = v;
    for(int i = 0; i < m; i++){
        s += lca((a[2*i-1]+v)%n, a[i*2]);
    }
    cout << s;
    return 0;
}