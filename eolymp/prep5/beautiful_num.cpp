#include <bits/stdc++.h>
#include <map>
using namespace std;

void primeFactors(unsigned long long n, map<unsigned long long, int> &fac)
{
    while (n % 2 == 0)
    {
        try{
            fac[2] += 1;
            if(fac[2] > 1){
                return;
            }
        }
        catch(exception& e){
            fac[2] = 1;
        }
        
        n = n/2;
    }
    for (unsigned long long i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            try{
                fac[i] += 1;
                if(fac[i] > 1){
                    return;
                }
            }
            catch(exception& e){
                fac[i] = 1;
            }
            n = n/i;
        }
    }
    return;
}

unsigned long long gcd_list(vector<unsigned long long> nums){
    unsigned long long res = 1;
    for(unsigned long long num : nums){
        res = __gcd(res, num);
    }
    return res;
}

int main()
{
    unsigned long long n;
    unsigned long long num = 1;
    unsigned long long mul;
    vector<unsigned long long> nums;
    map<unsigned long long, int> sol;
    cin >> n;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> num;
        nums.push_back(num);
        primeFactors(num, sol);
    }
    for(const auto &x : sol){
          if (x.second > 1){
              cout << x.first;
              return 0;
          }
    }
    cout << "Beautiful\n";
    return 0;
}