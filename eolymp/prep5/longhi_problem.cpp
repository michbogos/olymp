#include<iostream>
#include<map>

using namespace std;

unsigned long long phi(int n){
    unsigned long long result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main(){
    unsigned long long n, sol;
    sol = 0;
    while(scanf("%llu", &n)==1){
        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                sol += i * phi(n/i);
            }
        }
        printf("%llu\n", sol);
    }
    return 0;
}