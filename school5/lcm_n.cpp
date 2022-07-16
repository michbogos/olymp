#include<iostream>

unsigned long long gcd(unsigned long long a, unsigned long long b){
    while(a > 0 && b > 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}


unsigned long long lcm(long long a, unsigned long long b){
    return (a/gcd(a, b))*b;
}

int main(){
    unsigned long long n;
    unsigned long long sol = 1;
    std::cin >> n;
    unsigned long long num;
    for(int i = 0 ; i < n ; i ++){
        std::cin >> num;
        sol = lcm(sol, num);
    }
    return 0;
}
