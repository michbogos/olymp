#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, bool> m;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        m[tmp] = !m[tmp];
    }
    cout << count_if(m.begin(), m.end(), [](auto p){return p.second;});
    return 0;
}