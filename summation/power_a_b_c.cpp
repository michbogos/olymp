#include <iostream>
#include <cmath>

#define MOD 1000000007

long exp(long base, long exp, long modulo)
{
    long t = 1L;
    while (exp > 0) 
    {
        if (exp % 2 != 0)
            t = (t * base) % modulo;
  
        base = (base * base) % modulo;
        exp /= 2;
    }
    return t % modulo;
}

int main(){
    long a, b, c;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i ++){
        std::cin >> a, b, c;
        std::cout << exp(exp(a, b, MOD), c, MOD);  
    }
    return 0;
}