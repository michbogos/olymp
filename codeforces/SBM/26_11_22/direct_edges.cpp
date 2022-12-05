#include<vector>
#include<stdio.h>
#include<stack>

using namespace std;

int dfs(int v, vector<int> &visited, stack<int> &s, ){
    for()
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n , &m);
        vector<vector<int>> g(n);
        vector<pair<int, int>> undirected;
        vector<int> visited(n, 0);
        stack<int> sorted;
        for(int i = 0; i< m; i++){
            int d, u, v;
            scanf("%d %d %d", &d, &u, &v);
            if(d){
                g[u].push_back(v);
            }
            else{
                undirected.push_back({u, v});
            }
        }
        
    }
    return 0;
}