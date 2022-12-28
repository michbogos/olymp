#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m, '.'));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    int count = 0;
    for(int i = 0 ;i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '#' && !visited[i][j]){
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                while(!q.empty()){
                    int u = q.front().first;
                    int v = q.front().second;
                    q.pop();
                    vector<pair<int, int>> options = {{u+1, v}, {u-1, v}, {u, v+1}, {u, v-1}};
                    for(pair<int ,int> vert : options){
                        if(vert.first < n && vert.second < m && vert.first > -1 && vert.second > -1){
                            if(!visited[vert.first][vert.second] && mat[vert.first][vert.second] == '#'){
                                visited[vert.first][vert.second] = true;
                                q.push(vert);
                            }
                        }
                    }
                }
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}