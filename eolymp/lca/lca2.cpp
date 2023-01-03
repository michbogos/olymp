#include<iostream>
#include<vector>

using namespace std;

long t = 0;
vector<vector<int>> g(100001);
vector<vector<int>> up(100001, vector<int>(17, 0));
vector<int> enter(100001);
vector<int> leave(100001);

void dfs(long u, long ancestor){
    enter[u] = t++;
    up[u][0] = ancestor;
    for(long i = 1; i <= 16; i++)
        up[u][i] = up[up[u][i-1]][i-1];
    for(long v : g[u]){
        if(v != ancestor){
        dfs(v, u);}
    }
    leave[u] = t++;
}

bool parent(long a, long b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

long lca(long a, long b){
    if(parent(a, b)) return a;
    if(parent(b, a))return b;
    for(long i = 16; i >= 0; i--){
        if(!parent(up[a][i], b)){
            a = up[a][i];
        }
    }
    return up[a][0];
}

int main(){
    long n, m;
    cin >> n >> m;
    for(long i = 1; i < n; i++){
        long num;
        cin >> num;
        g[num].push_back(i);
        g[i].push_back(num);
    }
    dfs(0, 0);
    long a1, a2, x, y, z;
    cin >> a1 >> a2;
    cin >> x >> y >> z;
    vector<int> a(2*m+1);
    a[1] = a1;
    a[2] = a2;
    for(long i = 3; i < 2*m+1; i++){
        a[i] = (a[i-2]*x + y*a[i-1]+z)%n;
    }
    long v = lca(a1, a2);
    long s = v;
    for(long i = 2; i <= m; i++){
        v = lca((a[2*i-1]+v)%n, a[i*2]);
        s += v;
    }
    cout << s;
    return 0;
}