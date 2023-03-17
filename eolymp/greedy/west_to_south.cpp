#include<vector>
#include<iostream>

using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for(long long i = 0; i < n ; i++){
        cin >> arr[i];
    }
    long long res = 0;
    for(long long i = 0; i < n-1; i++){
        res += min(a*(arr[i+1]-arr[i]), b);
    }
    cout << res;
    return 0;
}