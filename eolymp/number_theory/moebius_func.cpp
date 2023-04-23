#include<iostream>
#include<vector>

using namespace std;
int m[10000002];

int main(){
    int t;
    cin >> t;
    m[1] = 1;
    for(int i = 1; i <= 10000002; i++){
        if(m[i] != 0){
            for(int j = 2*i; j <= 10000002; j+=i){
                m[j] -= m[i];
            }
        }
    }

    while(t--){
        long long n;
        cin >> n;
        long long res = 0;
        for(long long i = 1; i*i <= n; i++){
            res += m[i]*(n/(i*i));
        }
        cout << res << "\n";
    }
    return 0;
}