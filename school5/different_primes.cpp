#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>

using namespace std;

vector<int> segmentedSieve(int L, int R) {
    int lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<int> primes;
    for (int i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (int j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }
    return primes;
    // int count = 0;
    // vector<int> isPrime(R-L+1);
    // vector<int> counter(R-L+1, 0);
    // iota(isPrime.begin(), isPrime.end(), 0);
    // for(auto i : primes){
    //     for(int j = 0; j < isPrime.size(); j = j + i){
    //         isPrime[j]  /= i;
    //         counter[j] ++;
    //         if(isPrime[j] == 1 && counter[j] == 3){
    //             cout << j;
    //             count += 1;
    //         }
    //     }
    // }
    // cout << "\n" << count << "\n";
}

int main(){
    int num_tests;
    cin >> num_tests;
    vector<int> tests(num_tests);
    for(int i = 0; i < num_tests; i++){
        cin >> tests[i];
    }
    vector<int> nums = segmentedSieve(2, 10000000);
    vector<char> sol(100000000, false);
    for(auto i : nums){
        for(auto j : nums){
            for(auto k : nums){
                if(i * j * k > 30000000){
                    goto label;
                }
                if(i != j && i != k && j != i && j != k && k != i && k != j){
                    sol[i * j * k] = true;
                }
            }
        }
    }
    label:
    vector<int> solution;
    for(int i = 0; i < sol.size(); i++){
        if (sol[i]){
            solution.push_back(i);
        }
    }
    for(int i : tests){
        cout << solution[i-1] << "\n";
    }
    return 0;
}