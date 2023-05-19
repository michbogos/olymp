#include<iostream>

using namespace std;
long long m[100000];

long long f(long long n){
    long long res = 0;
        for(long long i = 1; i*i <= n; i++){
            res += m[i]*(n/(i*i));
    }
    return res;
}

int main(){
    m[1] = 1;
    for(long long i = 1; i <= 100000; i++){
        if(m[i] != 0){
            for(long long j = 2*i; j <= 100000; j+=i){
                m[j] -= m[i];
            }
        }
    }
    long long t;
    cin >> t;
    for(long long i = 0; i < t; i++){
        long long num;
        cin >> num;
        long long r = 2000000000;
        long long l = 0;
        long long res;
        while(r-l > 1){
            long long mid = (r+l)/2;
            long long fmid = f(mid);
            if(fmid >= num){
                r = mid;
            }
            if(fmid < num){
                l = mid;
            }
        }
        if(f(r) == num){
            cout << r << "\n";
        }
        else{
            cout << l << "\n";
        }
    }
    return 0;
}