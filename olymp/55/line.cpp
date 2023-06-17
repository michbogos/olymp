#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m;
    cin >> m;
    vector<pair<int, int>> arr(m);
    for(int i = 0; i < m; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    int res = 0;
    int p = 0;
    for(int i = 0; i < m; i++){
        p = 1;
        for(int j = 0; j < m; j++){
            if(i != j){
                auto e1 = arr[i];
                auto e2 = arr[j];
                if(e1.first * e2.first >= 0 && e1.second*e2.second >= 0){
                    if(e1.first*e2.second == e2.first*e1.second){
                        p ++;
                    }
                }
            }
        }
        res = max(p, res);
    }
    cout << res;
    return 0;
}