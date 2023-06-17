#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n+1, vector<int>(n+1, 0));
    for(int i =0  ;i < m; i++){
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                if(mat[i][j] == 0 && mat[i][k] == 0 && mat[k][j] == 0){
                    count ++;
                }
            }
        }
    }
    std::cout << count << "\n";
    return 0;
}