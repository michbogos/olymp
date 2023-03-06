#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> g;
vector<int> match;
vector<bool> used;
vector<bool> matched;
vector<vector<int>> mat;

void dfs2(int u){
    used[u] = true;
    for(int v : g[u]){
        if(!used[v]){
            dfs2(v);
        }
    }
}

bool dfs(int u){
    if(used[u] == true){
        return false;
    }
    used[u] = true;
    for(int v : g[u]){
        if(match[v] == -1 || dfs(match[v])){
            match[v] = u;
            matched[u] = true;
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    g.resize(2*n);
    used.resize(2*n);
    used.assign(2*n, false);
    match.resize(2*n);
    match.assign(2*n, -1);
    mat.resize(n, vector<int>(n, 0));
    matched.resize(2*n, false);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> orig = mat;

    for(int i = 0; i < n; i++){
        int mn = *min_element(mat[i].begin(), mat[i].end());
        for(int j = 0; j < n; j++){
            mat[i][j] -= mn;
        }
    }

    for(int i = 0; i < n; i++){
        vector<int> tmp(n);
        for(int j = 0; j < n; j++){
            tmp[j] = mat[i][j];
        }
        int mn = *min_element(tmp.begin(), tmp.end());
        for(int j = 0; j < n; j++){
            mat[i][j] -= mn;
        }
    }

    g.clear();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 0){
                g[i].push_back(j);
            }
        }
    }

    int lines = 0;
    while(lines < n){
        matched.assign(n, false);
        for(int i = 0; i < n; i++){
            used.assign(n, false);
            dfs(i);
        }
        lines = count_if(match.begin(), match.end(), [](int element){return element != -1;});
        if(lines < n){
            for(int i = 0; i < n; i++){
                if(!matched[i]){
                    dfs2(i);
                }
            }

            int mn = INT32_MAX;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(used[j] == true || used[i] == false) continue; //
                    mn = min(mn, mat[i][j]);
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(used[j]==true && used[i]==false) mat[i][j] += mn;
                    else if(!(used[j] == true || used[i] == false)) mat[i][j] -= mn;
                }
            }
        }
        else{
            int res = 0;
            for(int i = 0; i < n; i++){
                res += orig[i][match[i]];
            }
            cout << res;
            exit(0);
        }
    }
    return 0;
}