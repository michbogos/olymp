#include<vector>
#include<iostream>
#include<queue>
#include<iomanip>
#define LOGMAX 21

using namespace std;

long long t;
vector<vector<long long>> g(150001);
vector<vector<long long>> up(150001, vector<long long>(LOGMAX+1, 1));
vector<long long> enter(150001);
vector<long long> leave(150001);
vector<long long> lvl(150001);

void dfs(long long u, long long p, long long dist){
    enter[u] = t++;
    up[u][0] = p;
    lvl[u] = dist;
    for(long long i = 1; i <= LOGMAX; i++){
        up[u][i] = up[up[u][i-1]][i-1];
    }
    for(auto v : g[u]){
        if(v!=p){
            dfs(v, u, dist + 1);
        }
    }
    leave[u] = t++;
    return;
}

bool parent(long long a, long long b){
    return (enter[a] <= enter[b]) && (leave[a] >= leave[b]);
}

long long lca(long long a, long long b){
    if(parent(a, b)) return a;
    if(parent(b, a)) return b;
    for(long long i = LOGMAX; i >= 0; i--){
        if(!parent(up[a][i], b)) a = up[a][i];
    }
    return up[a][0];
}

int main(){
    long long n;
    double p;
    cin >> n >> p;
    for(long long i = 0; i < n-1; i++){
        long long u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // queue<long long> q;
    // q.push(0);
    // lvl[0] = 0;
    // vector<bool> visited(n, false);
    // while(!q.empty()){
    //     long long u = q.front();
    //     visited[u] = true;
    //     q.pop();
    //     for(long long v : g[u]){
    //         if(!visited[v]){
    //         lvl[v] = lvl[u] + 1;
    //         q.push(v);
    //         }
    //     }
    // }
    dfs(1, 1, 0);
    long long queries;
    cin >> queries;
    for(long long i = 0 ; i < queries; i++){
        long long c, d;
        cin >> c >> d;
        long long common = lca(c, d);
        cout << fixed << setprecision(5) << ((double)lvl[c]-(double)lvl[common]) * p + (((double)lvl[common]/2.0*p)) << " " << ((double)lvl[d] - (double)lvl[common]) * p + (((double)lvl[common]/2.0*p)) << "\n";
    }
    return 0;
}