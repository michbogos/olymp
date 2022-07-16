#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<char> segmentedSieve(long long L, long long R) {
    long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; i++) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }
    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main(){
    int a, b;
    while(cin >> a >> b){
        int count = 0;
        vector<char> primes = segmentedSieve(a, b);
        for(int i = 0; i < primes.size(); i++){
            if(primes[i]){
                count += 1;
            }
        }
        cout << count << "\n";
        cout << "\n";
    }
    return 0;
}