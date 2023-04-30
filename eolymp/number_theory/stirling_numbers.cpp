#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long s[21][21];


pair<long, long> get(int n, int m){
    long long d;
    long long a = 0;
    long long b = 1;
    for(int i = 1; i <= m; i++) a += s[n][i];

    for(int i = 1; i <= n; i++) b*=i;

    d = __gcd(a, b);
    a/=d;
    b/=d;

    return pair<long, long>(a, b);
}


int main(){
    int n, m;
    s[0][0] = 1;
    for(int i = 1; i <= 20; i++){
        for(int k = 1; k <= 20; k++){
            s[i][k] = s[i-1][k-1] + (i-1)*s[i-1][k];
        }
    }
    while(cin >> n >> m){
        auto res = get(n, m);
        cout << res.first << "/" << res.second << "\n";
    }
    return 0;
}