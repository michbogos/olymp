#include<iostream>
#include<bitset>

using namespace std;

int main(){
    int n, m;
    cin >> m >> n;
    bitset<10001> dp;
    dp[0] = true;
    for(int i = 0; i < n; i ++){
        int a;
        cin >> a;
        dp |= dp << a;
        
    }
    for(int i = m; i >= 0; i--){
        if(dp[i]){
            cout << i;
            return 0;
        }
    }
    return 0;
}