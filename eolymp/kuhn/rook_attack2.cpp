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
        if(match[v]==-1 || kuhn(match[v])){
            match[v] = u;
            return true;
        }
    }
    return false;
}


int main(){
    int n, m, k;
    while(cin >> n>> m>> k){
    vector<string> mat(n, string(m, '.'));
    vector<string> mat_rotated(m, string(n, '.'));
    vector<vector<int>> horizontal(n, vector<int>(m));
    vector<vector<int>> vertical(m, vector<int>(n));
    vector<pair<int, int>> cuts(k);
    g.clear();

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        mat[x][y] = 'X';
        mat_rotated[y][(n-1)-x] = 'X';
    }
    int color = 0;
    for(int i = 0; i < n; i++){
        int r = 0;
        int l = 0;
        int resl = 0;
        int resr = 0;
        while(resl != string::npos && resr != string::npos){
            l = mat[i].find('.', r);
            resl = l;
            r = mat[i].find('X', l+1);
            resr = r;
            if(l == string::npos) l = 0;
            if(r == string::npos) r = m-1;
            fill(horizontal[i].begin()+l, horizontal[i].begin()+r+1, color);
            color ++;
        }
    }

    for(int i  = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 'X'){
                horizontal[i][j] = -1;
            }
        }
    }

    // for(int i = 0; i < n; i++){
    //     string str;
    //     for(int j = 0; j < n; j++){
    //         str += mat[j][i];
    //     }
    //     mat_rotated[i] = str;
    // }

    color = 0;
    for(int i = 0; i < m; i++){
        int r = 0;
        int l = 0;
        int resl = 0;
        int resr = 0;
        while(resl != string::npos && resr != string::npos){
            l = mat_rotated[i].find('.', r);
            resl = l;
            r = mat_rotated[i].find('X', l+1);
            resr = r;
            if(l == string::npos) l = 0;
            if(r == string::npos) r = n-1;
            fill(vertical[i].begin()+l, vertical[i].begin()+r+1, color);
            color ++;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat_rotated[i][j] == 'X'){
                vertical[i][j] = -1;
            }
        }
    }

    g.resize(150);
    used.resize(g.size());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] != 'X'){
                g[horizontal[i][j]].push_back(vertical[j][i]);
            }
        }
    }
    match.resize(g.size());
    match.assign(g.size(), -1);
    for(int i = 0; i < used.size(); i++){
        used.assign(g.size(), false);
        kuhn(i);
    }

    auto gg = g;

    cout << count_if(match.begin(), match.end(), [](int i){return i != -1;});
    }
    return 0;
}