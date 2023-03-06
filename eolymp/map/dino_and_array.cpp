#include<map>
#include<iostream>

using namespace std;

int main(){
    map<long long, long long> m;
    long long n;
    long long a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        m[b] += a;
    }
    long long k;
    cin >> k;
    long long idx = 0;
    for(auto p : m){
        idx += p.second;
        if(idx >= k){
            cout << p.first;
            exit(0);
        }
    }
    return 0;
}
