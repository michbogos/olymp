#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
vector<int> match;

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
    int n;
    cin >> n;
    string left;
    cin >> left;
    vector<set<char>> blocks(n); 
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        blocks[i] = set<char>(tmp.begin(), tmp.end());
    }
    g.resize(left.size());
    match.resize(left.size());
    match.assign(left.size(), -1);
    for(int i = 0; i < left.size(); i++){
        for(int j = 0; j < blocks.size(); j++){
            if(blocks[j].count(left[i]) > 0){
                g[i].push_back(j);
            }
        }
    }
    used.resize(g.size());
    for(int i = 0;i < g.size(); i++){
        used.assign(g.size(), false);
        kuhn(i);
    }
    if(count_if(match.begin(), match.end(), [](int x){return (x != -1);}) == n){
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(match[i] != -1){
                cout << match[i]+1 << " ";
            }
        }
    }
    else{
        cout << "NO\n";
    }
    return 0;
}