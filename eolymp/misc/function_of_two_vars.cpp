#include<iostream>

using namespace std;

long long f(long long a, long long b){
    return a*a*a+a*a*b+a*b*b+b*b*b;
}

int main(){
    long long n;
    cin >> n;
    long long a = 0;
    long long b = 1000001;
    long long x = INT64_MAX;
    while(a <= b){
        long long res = f(a, b);
        if(res >= n){
            x = min(x, res);
        }
        if(res < n) a++;
        else{
            b--;
        }
    }
    cout << x;
    return 0;
}