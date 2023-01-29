#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
vector<int> match;

bool dfs(int u){
    if(used[u]) return false;
    used[u] = true;
    for(int v : g[u]){
        if(match[v] == -1 || dfs(match[v])){
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main(){
    int m, n;
    cin >> m >> n;
    string s;
    vector<int> color(n*m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m j++){

        }
    }
    for(int i = 0; i < n; i++){
        if(i%2){
            color[i] = 1;
        }
        else{
            color[i] = 0;
        }
    }
    for(int i = n; i < n*m; i++){
        color[i] = 1-color[i-n];
    }

    for(int i = 0;i < m; i++){
        string str;
        cin >> str;
        s.append(str);
    }
    int empty = count_if(s.begin(), s.end(), [](char x){return (x == '.');});
    g.resize(s.size() + 10);
    for(int i = 0; i < s.size(); i++){
        if(color[i] == 0){
            if(s[i] == '.'){
                if(i-n > -1){
                    if(s[i-n] == '.'){
                        if(color[i-n] == 1){
                            g[i].push_back(i-n);
                        }
                        // cout << num_mat[i-n];
                    }
                }
                if(i+n < s.size()){
                    if(s[i+n] == '.'){
                        if(color[i+n] == 1){
                            g[i].push_back(i+n);
                        }
                        // cout << num_mat[i+n];
                    }
                }
                if(i+1 < s.size()){
                    if(s[i+1] == '.'){
                        if(color[i+1] == 1){
                            g[i].push_back(i+1);
                        }
                        // cout << num_mat[i+1];
                    }
                }
                if(i-1 > -1){
                    if(s[i-1] == '.'){
                        if(color[i-1] == 1){
                            g[i].push_back(i-1);
                        }
                        // cout << num_mat[i-1];
                    }
                }
            }
        }
    }
    match.resize(g.size());
    match.assign(g.size(), -1);
    used.resize(g.size());
    used.assign(g.size(), false);

    for(int i = 0; i < s.size(); i++){
        if(color[i] == 0){
            if(s[i] == '.'){
                used.assign(g.size(), false);
                dfs(i);
            }
        }
    }
    auto mt = match;
    int res = count_if(match.begin(), match.end(), [](int i){return (i != -1);});
    if(res*2 == empty){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    auto gg = g;
    return 0;
}