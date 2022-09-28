#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    int n, num;
    set<pair<int, int>> s;
    vector<pair<int, int>> v;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> num;
        v.push_back({num, i});
        s.insert({num, i});
    }
    pair<int, int> mx = *prev(s.end());
    cout << prev(s.end())->second+1 << " " << prev(s.end())->first << "\n";
    for(int i = 0; i < v.size()-1; i++){
        cout << v[(i+mx.second+1)%v.size()].second+1 << " " << v[(i+mx.second+1)%v.size()].first << "\n";
    }
    return 0;
}