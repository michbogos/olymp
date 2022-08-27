#include<iostream>
#include<vector>

using namespace std;

int main(){
    unsigned long long n, l, r;
    cin >> n;
    vector<pair<unsigned long long, unsigned long long>> queries(n);
    for(unsigned long long i = 0 ; i < n; i++){
        cin >> l >> r;
        queries[i] = {l-1, r-1};
        
    }
    return 0;
}