#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> res;
    vector<bool> primes(50000, true);
    res.push_back(1ll);
    primes[2] = true;
    for(long long i = 2; i*i < INT32_MAX; i++){
        if(primes[i]){
            res.push_back(res[res.size()-1]*i);
            for(long long j = i+i; j*j < INT32_MAX; j += i){
                primes[j] = false;
            }
        }
    }
    cout << *prev(upper_bound(res.begin(), res.end(), n));

    return 0;
}