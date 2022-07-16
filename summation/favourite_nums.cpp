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
    int count = 0;
    int a, b;
    cin >> a >> b;
    SieveOfEratosthenes(b);
    for (int i = a; i <= b; i++) {
        if (i == 2){
            if (to_string(i).find("13") == string::npos){
                count ++;
            } 
        }
        else if (i % 2 == 1 && Primes[i / 2] == 0){
            if (to_string(i).find("13") == string::npos){
                count ++;
            }
        }
    }

    cout << count;

    return 0;
}