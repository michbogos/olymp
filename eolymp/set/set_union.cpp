#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        for(int i = 0 ; i < m; i++){
            int num;
            cin >> num;
            s.insert(num);
        }
    }
    cout << s.size();
    return 0;
}