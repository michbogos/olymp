#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    set<int> s;
    vector<int> add;
    vector<int> get;
    int n, m, num, u;
    u = -1;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> num;
        add.push_back(num);
    }
    for(int i = 0; i < m; i++){
        cin >> num;
        get.push_back(num);
    }

    for(int i = 0; i < add.size(); i++){
        
    }
    return 0;
}