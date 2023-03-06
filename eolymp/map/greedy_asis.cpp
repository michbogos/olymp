#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin  >> num;
        m[num]++;
        m[num+1]++;
        m[num-1]++;
    }
    int mx = 0;
    for(auto p : m){
        mx = max(mx, p.second);
    }
    cout << mx;
    return 0;
}