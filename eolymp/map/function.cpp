#include<iostream>
#include<map>

using namespace std;

map<unsigned long long, unsigned long long> m;

unsigned long long solve(unsigned long long n){
    if(n <= 2){
        return 1;
    }
    if(m[n] > 0){
        return m[n];
    }
    else{
        if(n%2 == 1){
            m[n] = solve(6*n/7)+solve(2*n/3);
            return m[n];
        }
        else if(n%2 == 0){
            m[n] = solve(n-1) + solve(n-3);
            return m[n];
        }
    }
}

int main(){
    m[1] = 1;
    m[2] = 1;
    unsigned long long n;
    cin >> n;
    cout << (unsigned int)solve(n);
    return 0;
}