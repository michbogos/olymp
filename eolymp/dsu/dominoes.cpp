#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> parent;

int repr(int a){
    if(parent[a] == a) return a;
    return repr(parent[a]);
}

void unite(int a, int b){
    int x = repr(a);
    int y = repr(b);

    if(x == y){
        return;
    }
    if(x > y){
        parent[y] = x;
        return;
    }
    else{
        parent[x] = y;
        return;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    parent.resize(n);
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u --;
        v --;
        unite(u, v);
    }
    unordered_set<int> s(parent.begin(), parent.end());
    cout << s.size()-1;
    return 0;
}