#include <iostream>
#include <cmath>

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
    int n;
    long a, b, c;
    std::cin >> n;
    for(int i = 0; i <= n; i++){
        std::cin >> a >> b >> c;
        std::cout << exp(a, std::pow(a, b), 10e9+7) << "\n";
    }
    return 0;
}