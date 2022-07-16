#include<iostream>

unsigned long long gcd(unsigned long long a, unsigned long long b){
    while(a > 0 && b > 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main(){
    int n, m; std::cin >> n >>m; std::cout << n+m - gcd(n, m) << "\n";
    return 0;
}