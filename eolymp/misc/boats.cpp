#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<vector<int>> g;
vector<int> color;
bool res = true;

int x, y;

void dfs(int u, int col){
    color[u] =col;
    for(int v : g[u]){
        if(v != x && v != y){
            if(color[v] == 0){
                dfs(v, 3-col);
            }
            else if(color[v] == color[u]){
                res = false;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    g.resize(n);
    color.resize(n);
    color.assign(n, false);
    if(n <= 3){
        cout << ":)\n";
        return 0; 
    }
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        for(int j = 0; j < num; j++){
            int numm;
            cin >> numm;
            g[i].push_back(numm-1);
            g[numm-1].push_back(i);
        }
    }
    res = true;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            x = i;
            y = j;
            res = true;
            color.assign(n, 0);
            for(int k = 0; k < n; k++){
                if(color[k]==0 && k != x && k != y){
                    dfs(k, 1);
                }
            }
            if(res){
                cout << ":)\n";
                return 0;
            }
        }
    }
    if(!res) cout << ":(\n";
    return 0;
}