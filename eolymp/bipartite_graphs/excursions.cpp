#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<int> match;
vector<bool> used;

struct Excursion{
    int id;
    int size;
    int price;
};

bool kuhn(int u){
    if(used[u]) return false;
    used[u] = true;
    for(int v : g[u]){
        if(match[v] == -1 || kuhn(match[v])){
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> right;
    int max_size = 0;
    for(int i = 0; i < n; i++){
        int size, cost;
        cin >> size >> cost;
        for(int j = 0; j < size; j++){
            right.push_back({cost, i});
        }
    }
    used.resize(right.size());
    g.resize(k);
    for(int i = 0 ; i < k; i++){
        int size;
        cin >> size;
        for(int j = 0; j < size; j++){
            int id;
            cin >> id;
            for(int l = 0; l < right.size(); l++){
                if(right[l].second == id-1){
                    g[i].push_back(l);
                }
            }
        }
    }
    auto gg = g;
    match.resize(g.size());
    match.assign(g.size(), -1);
    for(int i = 0; i < g.size(); i++){
        used.assign(g.size(), false);
        kuhn(i);
    }
    int res = 0;
    for(int i = 0; i < match.size(); i++){
        if(match[i] != -1){
            res += right[match[i]].first;
        }
    }
    cout << res;
    return 0;
}