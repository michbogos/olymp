#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int get(int u, vector<int> &parent){
    if(parent[u] == u){
        return u;
    }
    else{
        return parent[u] = get(parent[u], parent);
    }
}


void Union(int x, int y, vector<int> &parent)
{
int x1 = get(x, parent);
int y1 = get(y, parent);
if (x1 == y1) return;
parent[x1] = y1;
}


struct Edge{
    int u;
    int v;
    int t;
};

bool sorter(Edge const& lhs, Edge const& rhs){
    return lhs.t < rhs.t;
}



int main(){
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    vector<Edge> edges_reserve(m);
    for(int i = 0; i < m; i++){
        int u, v, t;
        cin >> u >> v >> t;
        u --;
        v --;
        edges[i] = {u, v, t};
        edges_reserve[u] = {-1, v, t};
    }
    sort(edges.begin(), edges.end(), &sorter);
    int mx = 0;
    bool s = false;
    bool f = false;
    vector<int> parent(n);
    for(int i = 0 ;i < n; i++){
        parent[i] = i;
    }
    for(auto edge:edges){
        Union(edge.u, edge.v, parent);
        if(get(0, parent) == get(n-1, parent)){
            cout << "Correct";
            for(int i = 0; i < n; i++){
                if(get(i, parent) == get(0, parent)){
                    mx = max(edges[i].t, mx);
                }
            }
        }

    }
    cout << mx;
    return 0;
}