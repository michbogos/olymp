#include<iostream>

using namespace std;
using ll = long long;
long long  C[1001], n, COMB[1001][1001];
#define MD 1000000007


long long comb(long long n, long long k){
    if(!k) return COMB[n][k] = 1;
    if(COMB[n][k] > 0) return COMB[n][k];
    if(n-k < k) return comb(n, n-k);
    return COMB[n][k] = (comb(n-1, k) + comb(n-1, k-1))%MD;
}

int main(){
    C[0] = C[1] = 1;
    for (int i = 2; i < 1001; i++)
    {
        for (int j = 0; j < i; j++) C[i] = (C[i] + C[j] * C[i - j - 1]) % MD;
    }
    long long t;
    cin >> t;
    while(t--){
        long long res = 0;
        long long n;
        cin >> n;
        long long arr[n];
        long long s = 0;
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
            s += arr[i];
        }
        res = C[s];
        for(long long i =0 ;i  < n; i++){
            res = (res * comb(s, arr[i]))%MD;
            s -= arr[i];
        }
        cout << res << "\n";
    }
    return 0;
}