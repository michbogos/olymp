#include<vector>
#include<queue>
#include<iostream>

using namespace std;

int main(){
    int n;
    pair<int, int> s, f;
    cin >> n;
    vector<vector<char>> mat(n, vector<char>(n, '.'));
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j]=='@'){
                s = {i, j};
            }
            if(mat[i][j]=='X'){
                f = {i, j};
            }
        }
    }
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(n, {-1, -1}));
    queue<pair<int, int>> q;
    q.push(s);
    visited[s.first][s.second] = true;
    while(!q.empty()){
        pair<int, int> u = q.front();
        q.pop();
        vector<pair<int, int>> options = {{u.first+1, u.second}, {u.first-1, u.second}, {u.first, u.second+1}, {u.first, u.second-1}};
        for(auto v : options){
            if(v.first < n && v.second < n && v.first > -1 && v.second > -1 && mat[v.first][v.second] != 'O' && !visited[v.first][v.second]){
                visited[v.first][v.second] = true;
                parent[v.first][v.second] = u;
                q.push(v);
            }
        }

    }

    if(!visited[f.first][f.second]){
        cout << "N\n";
    }
    else{
        auto vert = f;
        while(vert != s){
            mat[vert.first][vert.second] = '+';
            vert = parent[vert.first][vert.second];
        }
        cout << "Y\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << mat[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}