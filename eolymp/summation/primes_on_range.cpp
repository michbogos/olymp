#include <bitset>
#include <iostream>
#include <vector>
using namespace std;
 
bitset<1000000> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}
 
int main()
{
    int a, b;
    int count;
    
    while(cin >> a && cin >> b){
        if (a < 0) a = 0;
        if (b < 0) b = 0;
        for (int i = a; i <= b; i++) {
        cout << count << "\n";
        cin >> a >> b;
        count = 0;
    }
    return 0;
}