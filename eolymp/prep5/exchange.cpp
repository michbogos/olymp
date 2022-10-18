#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n, m;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%d\n", &m);
        vector<int> from(m);
        vector<int> to(m);
        for(int u = 0; u < m; u++){
            cin >> from[u];
            cin >> to[u];
        }
        sort(to.begin(), to.end());
        sort(from.begin(), from.end());
        bool flag = false;
        for(int j = 0; j < to.size(); j++){
            if(to[j] != from[j]){
                cout << "NO\n";
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "YES\n";
        }
    }
    return 0;
}