#include<iostream>
#include<vector>
#include<string>
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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> color(n*m);
    for(int i = 0; i < m; i++){
        if(i%2){
            color[i] = 1;
        }
        else{
            color[i] = 0;
        }
    }
    for(int i = m; i < n*m; i++){
        color[i] = 1-color[i-m];
    }
    string s;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.append(str);
    }
    g.resize(s.size());
    for(int i = 0; i < s.size(); i++){
        if(color[i] == 0){
            if(s[i] == '*'){
                if(i+1 < s.size()){
                    if(s[i+1] == '*'){ 
                        if(color[i+1] == 1) g[i].push_back(i+1);
                    }
                }
                if(i-1 > -1){
                    if(s[i-1] == '*'){
                        if(color[i] == 1) g[i].push_back(i-1);
                    }
                }
                if(i+m < s.size()){
                    if(s[i+m] == '*'){
                        if(color[i+m] == 1) g[i].push_back(i+m);
                    }
                }
                if(i-m > -1){
                    if(s[i-m] == '*'){
                        if(color[i-m] == 1) g[i].push_back(i-m);
                    }
                }
            }
        }
    }
    match.resize(s.size());
    match.assign(s.size(), -1);
    used.resize(s.size());
    for(int i = 0; i < g.size(); i++){
        if(color[i] == 0){
            if(s[i] == '*'){
                used.assign(g.size(), false);
                kuhn(i);
            }
        }
    }
    int matches = count_if(match.begin(), match.end(), [](int i){return (i != -1);});
    int empty = count(s.begin(), s.end(), '*');
    if(a >= b*2){
        cout << b*empty;
    }
    else{
        cout << a*matches + (empty-2*matches)*b;
    }
    return 0;
}